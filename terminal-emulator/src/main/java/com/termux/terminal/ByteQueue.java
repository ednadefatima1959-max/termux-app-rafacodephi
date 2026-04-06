package com.termux.terminal;

final class ByteQueue {

    private final byte[] mBuffer;
    private int mHead;
    private int mStoredBytes;
    private boolean mOpen = true;

    public ByteQueue(int size) {
        mBuffer = new byte[size];
    }

    public synchronized void close() {
        mOpen = false;
        notify();
    }

    public synchronized int read(byte[] buffer, boolean block) {
        while (mStoredBytes == 0 && mOpen) {
            if (block) {
                try {
                    wait();
                } catch (InterruptedException e) {
                    // Ignore.
                }
            } else {
                return 0;
            }
        }
        if (!mOpen) return -1;

        int totalRead = 0;
        int bufferLength = mBuffer.length;
        boolean wasFull = bufferLength == mStoredBytes;
        int length = buffer.length;
        int offset = 0;
        while (length > 0 && mStoredBytes > 0) {
            int oneRun = Math.min(bufferLength - mHead, mStoredBytes);
            int bytesToCopy = Math.min(length, oneRun);
            System.arraycopy(mBuffer, mHead, buffer, offset, bytesToCopy);
            mHead += bytesToCopy;
            if (mHead >= bufferLength) mHead = 0;
            mStoredBytes -= bytesToCopy;
            length -= bytesToCopy;
            offset += bytesToCopy;
            totalRead += bytesToCopy;
        }
        if (wasFull) notify();
        return totalRead;
    }

    public synchronized boolean write(byte[] buffer, int offset, int lengthToWrite) {
        if (lengthToWrite + offset > buffer.length) {
            throw new IllegalArgumentException("length + offset > buffer.length");
        } else if (lengthToWrite <= 0) {
            throw new IllegalArgumentException("length <= 0");
        }

        final int bufferLength = mBuffer.length;

        while (lengthToWrite > 0) {
            while (bufferLength == mStoredBytes && mOpen) {
                try {
                    wait();
                } catch (InterruptedException e) {
                    // Ignore.
                }
            }
            if (!mOpen) return false;
            final boolean wasEmpty = mStoredBytes == 0;
            int bytesToWrite = Math.min(lengthToWrite, bufferLength - mStoredBytes);
            lengthToWrite -= bytesToWrite;

            int tail = mHead + mStoredBytes;
            if (tail >= bufferLength) tail -= bufferLength;
            int firstPart = Math.min(bytesToWrite, bufferLength - tail);
            System.arraycopy(buffer, offset, mBuffer, tail, firstPart);
            offset += firstPart;
            bytesToWrite -= firstPart;
            if (bytesToWrite > 0) {
                System.arraycopy(buffer, offset, mBuffer, 0, bytesToWrite);
                offset += bytesToWrite;
            }
            mStoredBytes += firstPart + bytesToWrite;
            if (wasEmpty) notify();
        }
        return true;
    }
            }
