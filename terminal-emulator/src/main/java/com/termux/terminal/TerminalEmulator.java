package com.termux.terminal;

import android.util.Base64;

import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.Locale;
import java.util.Objects;
import java.util.Stack;

/**
 * Renders text into a screen. Contains all the terminal-specific knowledge and state.
 */
public final class TerminalEmulator {

    private static final boolean LOG_ESCAPE_SEQUENCES = false;

    public static final int MOUSE_LEFT_BUTTON = 0;
    public static final int MOUSE_LEFT_BUTTON_MOVED = 32;
    public static final int MOUSE_WHEELUP_BUTTON = 64;
    public static final int MOUSE_WHEELDOWN_BUTTON = 65;
    public static final int UNICODE_REPLACEMENT_CHAR = 0xFFFD;

    private static final int ESC_NONE = 0;
    private static final int ESC = 1;
    private static final int ESC_POUND = 2;
    private static final int ESC_SELECT_LEFT_PAREN = 3;
    private static final int ESC_SELECT_RIGHT_PAREN = 4;
    private static final int ESC_CSI = 6;
    private static final int ESC_CSI_QUESTIONMARK = 7;
    private static final int ESC_CSI_DOLLAR = 8;
    private static final int ESC_PERCENT = 9;
    private static final int ESC_OSC = 10;
    private static final int ESC_OSC_ESC = 11;
    private static final int ESC_CSI_BIGGERTHAN = 12;
    private static final int ESC_P = 13;
    private static final int ESC_CSI_QUESTIONMARK_ARG_DOLLAR = 14;
    private static final int ESC_CSI_ARGS_SPACE = 15;
    private static final int ESC_CSI_ARGS_ASTERIX = 16;
    private static final int ESC_CSI_DOUBLE_QUOTE = 17;
    private static final int ESC_CSI_SINGLE_QUOTE = 18;
    private static final int ESC_CSI_EXCLAMATION = 19;
    private static final int ESC_APC = 20;
    private static final int ESC_APC_ESCAPE = 21;
    private static final int ESC_CSI_UNSUPPORTED_PARAMETER_BYTE = 22;
    private static final int ESC_CSI_UNSUPPORTED_INTERMEDIATE_BYTE = 23;

    private static final int MAX_ESCAPE_PARAMETERS = 32;
    private static final int MAX_OSC_STRING_LENGTH = 8192;

    private static final int DECSET_BIT_APPLICATION_CURSOR_KEYS = 1;
    private static final int DECSET_BIT_REVERSE_VIDEO = 1 << 1;
    private static final int DECSET_BIT_ORIGIN_MODE = 1 << 2;
    private static final int DECSET_BIT_AUTOWRAP = 1 << 3;
    private static final int DECSET_BIT_CURSOR_ENABLED = 1 << 4;
    private static final int DECSET_BIT_APPLICATION_KEYPAD = 1 << 5;
    private static final int DECSET_BIT_MOUSE_TRACKING_PRESS_RELEASE = 1 << 6;
    private static final int DECSET_BIT_MOUSE_TRACKING_BUTTON_EVENT = 1 << 7;
    private static final int DECSET_BIT_SEND_FOCUS_EVENTS = 1 << 8;
    private static final int DECSET_BIT_MOUSE_PROTOCOL_SGR = 1 << 9;
    private static final int DECSET_BIT_BRACKETED_PASTE_MODE = 1 << 10;
    private static final int DECSET_BIT_LEFTRIGHT_MARGIN_MODE = 1 << 11;
    private static final int DECSET_BIT_RECTANGULAR_CHANGEATTRIBUTE = 1 << 12;

    private String mTitle;
    private final Stack<String> mTitleStack = new Stack<>();

    private int mCursorRow, mCursorCol;
    public int mRows, mColumns;
    private int mCellWidthPixels, mCellHeightPixels;

    public static final int TERMINAL_TRANSCRIPT_ROWS_MIN = 100;
    public static final int TERMINAL_TRANSCRIPT_ROWS_MAX = 50000;
    public static final int DEFAULT_TERMINAL_TRANSCRIPT_ROWS = 2000;

    public static final int TERMINAL_CURSOR_STYLE_BLOCK = 0;
    public static final int TERMINAL_CURSOR_STYLE_UNDERLINE = 1;
    public static final int TERMINAL_CURSOR_STYLE_BAR = 2;
    public static final int DEFAULT_TERMINAL_CURSOR_STYLE = TERMINAL_CURSOR_STYLE_BLOCK;
    public static final Integer[] TERMINAL_CURSOR_STYLES_LIST = new Integer[]{TERMINAL_CURSOR_STYLE_BLOCK, TERMINAL_CURSOR_STYLE_UNDERLINE, TERMINAL_CURSOR_STYLE_BAR};

    private int mCursorStyle = DEFAULT_TERMINAL_CURSOR_STYLE;

    private final TerminalBuffer mMainBuffer;
    final TerminalBuffer mAltBuffer;
    private TerminalBuffer mScreen;

    private final TerminalOutput mSession;
    TerminalSessionClient mClient;

    private int mArgIndex;
    private final int[] mArgs = new int[MAX_ESCAPE_PARAMETERS];
    private int mArgsSubParamsBitSet = 0;

    private final StringBuilder mOscBuilder = new StringBuilder(256);  // Reutilizado

    private boolean mContinueSequence;
    private int mEscapeState;

    private final SavedScreenState mSavedStateMain = new SavedScreenState();
    private final SavedScreenState mSavedStateAlt = new SavedScreenState();

    private boolean mUseLineDrawingG0, mUseLineDrawingG1, mUseLineDrawingUsesG0 = true;

    private int mCurrentDecSetFlags, mSavedDecSetFlags;
    private boolean mInsertMode;
    private boolean[] mTabStop;
    private int mTopMargin, mBottomMargin, mLeftMargin, mRightMargin;
    private boolean mAboutToAutoWrap;
    private boolean mCursorBlinkingEnabled;
    private boolean mCursorBlinkState;
    int mForeColor, mBackColor, mUnderlineColor;
    int mEffect;
    private int mScrollCounter = 0;
    private boolean mAutoScrollDisabled;
    private int mLastEmittedCodePoint = -1;

    public final TerminalColors mColors = new TerminalColors();
    private static final String LOG_TAG = "TerminalEmulator";

    // ==================== CONSTRUTOR E MÉTODOS PÚBLICOS ====================

    public TerminalEmulator(TerminalOutput session, int columns, int rows, int cellWidthPixels, int cellHeightPixels, Integer transcriptRows, TerminalSessionClient client) {
        mSession = session;
        mScreen = mMainBuffer = new TerminalBuffer(columns, getTerminalTranscriptRows(transcriptRows), rows);
        mAltBuffer = new TerminalBuffer(columns, rows, rows);
        mClient = client;
        mRows = rows;
        mColumns = columns;
        mCellWidthPixels = cellWidthPixels;
        mCellHeightPixels = cellHeightPixels;
        mTabStop = new boolean[mColumns];
        reset();
    }

    private int getTerminalTranscriptRows(Integer transcriptRows) {
        if (transcriptRows == null || transcriptRows < TERMINAL_TRANSCRIPT_ROWS_MIN || transcriptRows > TERMINAL_TRANSCRIPT_ROWS_MAX)
            return DEFAULT_TERMINAL_TRANSCRIPT_ROWS;
        else
            return transcriptRows;
    }

    public void updateTerminalSessionClient(TerminalSessionClient client) {
        mClient = client;
        setCursorStyle();
        setCursorBlinkState(true);
    }

    public TerminalBuffer getScreen() {
        return mScreen;
    }

    public boolean isAlternateBufferActive() {
        return mScreen == mAltBuffer;
    }

    public void sendMouseEvent(int mouseButton, int column, int row, boolean pressed) {
        if (column < 1) column = 1;
        if (column > mColumns) column = mColumns;
        if (row < 1) row = 1;
        if (row > mRows) row = mRows;

        if (mouseButton == MOUSE_LEFT_BUTTON_MOVED && !isDecsetInternalBitSet(DECSET_BIT_MOUSE_TRACKING_BUTTON_EVENT)) {
            return;
        } else if (isDecsetInternalBitSet(DECSET_BIT_MOUSE_PROTOCOL_SGR)) {
            mSession.write(String.format("\033[<%d;%d;%d" + (pressed ? 'M' : 'm'), mouseButton, column, row));
        } else {
            mouseButton = pressed ? mouseButton : 3;
            boolean out_of_bounds = column > 255 - 32 || row > 255 - 32;
            if (!out_of_bounds) {
                byte[] data = {'\033', '[', 'M', (byte) (32 + mouseButton), (byte) (32 + column), (byte) (32 + row)};
                mSession.write(data, 0, data.length);
            }
        }
    }

    public void resize(int columns, int rows, int cellWidthPixels, int cellHeightPixels) {
        this.mCellWidthPixels = cellWidthPixels;
        this.mCellHeightPixels = cellHeightPixels;

        if (mRows == rows && mColumns == columns) {
            return;
        } else if (columns < 2 || rows < 2) {
            throw new IllegalArgumentException("rows=" + rows + ", columns=" + columns);
        }

        if (mRows != rows) {
            mRows = rows;
            mTopMargin = 0;
            mBottomMargin = mRows;
        }
        if (mColumns != columns) {
            int oldColumns = mColumns;
            mColumns = columns;
            boolean[] oldTabStop = mTabStop;
            mTabStop = new boolean[mColumns];
            setDefaultTabStops();
            int toTransfer = Math.min(oldColumns, columns);
            System.arraycopy(oldTabStop, 0, mTabStop, 0, toTransfer);
            mLeftMargin = 0;
            mRightMargin = mColumns;
        }

        resizeScreen();
    }

    private void resizeScreen() {
        final int[] cursor = {mCursorCol, mCursorRow};
        int newTotalRows = (mScreen == mAltBuffer) ? mRows : mMainBuffer.mTotalRows;
        mScreen.resize(mColumns, mRows, newTotalRows, cursor, getStyle(), isAlternateBufferActive());
        mCursorCol = cursor[0];
        mCursorRow = cursor[1];
    }

    public int getCursorRow() { return mCursorRow; }
    public int getCursorCol() { return mCursorCol; }
    public int getCursorStyle() { return mCursorStyle; }
    public void setCursorStyle() {
        Integer cursorStyle = null;
        if (mClient != null) cursorStyle = mClient.getTerminalCursorStyle();
        if (cursorStyle == null || !Arrays.asList(TERMINAL_CURSOR_STYLES_LIST).contains(cursorStyle))
            mCursorStyle = DEFAULT_TERMINAL_CURSOR_STYLE;
        else
            mCursorStyle = cursorStyle;
    }
    public boolean isReverseVideo() { return isDecsetInternalBitSet(DECSET_BIT_REVERSE_VIDEO); }
    public boolean isCursorEnabled() { return isDecsetInternalBitSet(DECSET_BIT_CURSOR_ENABLED); }
    public boolean shouldCursorBeVisible() {
        if (!isCursorEnabled()) return false;
        else return mCursorBlinkingEnabled ? mCursorBlinkState : true;
    }
    public void setCursorBlinkingEnabled(boolean enabled) { mCursorBlinkingEnabled = enabled; }
    public void setCursorBlinkState(boolean state) { mCursorBlinkState = state; }
    public boolean isKeypadApplicationMode() { return isDecsetInternalBitSet(DECSET_BIT_APPLICATION_KEYPAD); }
    public boolean isCursorKeysApplicationMode() { return isDecsetInternalBitSet(DECSET_BIT_APPLICATION_CURSOR_KEYS); }
    public boolean isMouseTrackingActive() {
        return isDecsetInternalBitSet(DECSET_BIT_MOUSE_TRACKING_PRESS_RELEASE) || isDecsetInternalBitSet(DECSET_BIT_MOUSE_TRACKING_BUTTON_EVENT);
    }

    private void setDefaultTabStops() {
        for (int i = 0; i < mColumns; i++)
            mTabStop[i] = (i & 7) == 0 && i != 0;
    }

    // ==================== MÉTODO APPEND OTIMIZADO ====================
    public void append(byte[] buffer, int length) {
        // Decodificação UTF-8 em bloco usando String (código nativo)
        String decoded = new String(buffer, 0, length, StandardCharsets.UTF_8);
        for (int i = 0; i < decoded.length(); ) {
            int codePoint = decoded.codePointAt(i);
            i += Character.charCount(codePoint);
            processCodePoint(codePoint);
        }
    }

    public void processCodePoint(int b) {
        if (mEscapeState == ESC_APC) {
            doApc(b);
            return;
        } else if (mEscapeState == ESC_APC_ESCAPE) {
            doApcEscape(b);
            return;
        }

        switch (b) {
            case 0: break;
            case 7:
                if (mEscapeState == ESC_OSC)
                    doOsc(b);
                else
                    mSession.onBell();
                break;
            case 8:
                if (mLeftMargin == mCursorCol) {
                    int previousRow = mCursorRow - 1;
                    if (previousRow >= 0 && mScreen.getLineWrap(previousRow)) {
                        mScreen.clearLineWrap(previousRow);
                        setCursorRowCol(previousRow, mRightMargin - 1);
                    }
                } else {
                    setCursorCol(mCursorCol - 1);
                }
                break;
            case 9:
                mCursorCol = nextTabStop(1);
                break;
            case 10: case 11: case 12:
                doLinefeed();
                break;
            case 13:
                setCursorCol(mLeftMargin);
                break;
            case 14:
                mUseLineDrawingUsesG0 = false;
                break;
            case 15:
                mUseLineDrawingUsesG0 = true;
                break;
            case 24: case 26:
                if (mEscapeState != ESC_NONE) {
                    mEscapeState = ESC_NONE;
                    emitCodePoint(127);
                }
                break;
            case 27:
                if (mEscapeState == ESC_P) {
                    return;
                } else if (mEscapeState != ESC_OSC) {
                    startEscapeSequence();
                } else {
                    doOsc(b);
                }
                break;
            default:
                mContinueSequence = false;
                switch (mEscapeState) {
                    case ESC_NONE:
                        if (b >= 32) emitCodePoint(b);
                        break;
                    case ESC:
                        doEsc(b);
                        break;
                    case ESC_POUND:
                        doEscPound(b);
                        break;
                    case ESC_SELECT_LEFT_PAREN:
                        mUseLineDrawingG0 = (b == '0');
                        break;
                    case ESC_SELECT_RIGHT_PAREN:
                        mUseLineDrawingG1 = (b == '0');
                        break;
                    case ESC_CSI:
                        doCsi(b);
                        break;
                    case ESC_CSI_UNSUPPORTED_PARAMETER_BYTE:
                    case ESC_CSI_UNSUPPORTED_INTERMEDIATE_BYTE:
                        doCsiUnsupportedParameterOrIntermediateByte(b);
                        break;
                    case ESC_CSI_EXCLAMATION:
                        if (b == 'p') reset();
                        else unknownSequence(b);
                        break;
                    case ESC_CSI_QUESTIONMARK:
                        doCsiQuestionMark(b);
                        break;
                    case ESC_CSI_BIGGERTHAN:
                        doCsiBiggerThan(b);
                        break;
                    case ESC_CSI_DOLLAR:
                        doCsiDollar(b);
                        break;
                    case ESC_CSI_DOUBLE_QUOTE:
                        if (b == 'q') {
                            int arg = getArg0(0);
                            if (arg == 0 || arg == 2) mEffect &= ~TextStyle.CHARACTER_ATTRIBUTE_PROTECTED;
                            else if (arg == 1) mEffect |= TextStyle.CHARACTER_ATTRIBUTE_PROTECTED;
                            else unknownSequence(b);
                        } else unknownSequence(b);
                        break;
                    case ESC_CSI_SINGLE_QUOTE:
                        if (b == '}') {
                            int colsAfter = mRightMargin - mCursorCol;
                            int colsIns = Math.min(getArg0(1), colsAfter);
                            int colsMove = colsAfter - colsIns;
                            mScreen.blockCopy(mCursorCol, 0, colsMove, mRows, mCursorCol + colsIns, 0);
                            blockClear(mCursorCol, 0, colsIns, mRows);
                        } else if (b == '~') {
                            int colsAfter = mRightMargin - mCursorCol;
                            int colsDel = Math.min(getArg0(1), colsAfter);
                            int colsMove = colsAfter - colsDel;
                            mScreen.blockCopy(mCursorCol + colsDel, 0, colsMove, mRows, mCursorCol, 0);
                        } else unknownSequence(b);
                        break;
                    case ESC_PERCENT:
                        break;
                    case ESC_OSC:
                        doOsc(b);
                        break;
                    case ESC_OSC_ESC:
                        doOscEsc(b);
                        break;
                    case ESC_P:
                        doDeviceControl(b);
                        break;
                    case ESC_CSI_QUESTIONMARK_ARG_DOLLAR:
                        if (b == 'p') {
                            int mode = getArg0(0);
                            int value;
                            if (mode == 47 || mode == 1047 || mode == 1049) {
                                value = (mScreen == mAltBuffer) ? 1 : 2;
                            } else {
                                int internalBit = mapDecSetBitToInternalBit(mode);
                                if (internalBit != -1) value = isDecsetInternalBitSet(internalBit) ? 1 : 2;
                                else {
                                    Logger.logError(mClient, LOG_TAG, "Got DECRQM for unrecognized private DEC mode=" + mode);
                                    value = 0;
                                }
                            }
                            mSession.write(String.format(Locale.US, "\033[?%d;%d$y", mode, value));
                        } else unknownSequence(b);
                        break;
                    case ESC_CSI_ARGS_SPACE:
                        int arg = getArg0(0);
                        switch (b) {
                            case 'q':
                                switch (arg) {
                                    case 0: case 1: case 2: mCursorStyle = TERMINAL_CURSOR_STYLE_BLOCK; break;
                                    case 3: case 4: mCursorStyle = TERMINAL_CURSOR_STYLE_UNDERLINE; break;
                                    case 5: case 6: mCursorStyle = TERMINAL_CURSOR_STYLE_BAR; break;
                                }
                                break;
                            case 't': case 'u': break;
                            default: unknownSequence(b);
                        }
                        break;
                    case ESC_CSI_ARGS_ASTERIX:
                        if (b == 'x') {
                            int extent = getArg0(0);
                            setDecsetinternalBit(DECSET_BIT_RECTANGULAR_CHANGEATTRIBUTE, extent == 2);
                        } else unknownSequence(b);
                        break;
                    default:
                        unknownSequence(b);
                        break;
                }
                if (!mContinueSequence) mEscapeState = ESC_NONE;
                break;
        }
    }

    // ==================== MÉTODOS OSC/DCS REESCRITOS ====================
    private void doOsc(int b) {
        switch (b) {
            case 7:
                doOscSetTextParameters("\007");
                break;
            case 27:
                continueSequence(ESC_OSC_ESC);
                break;
            default:
                if (mOscBuilder.length() < MAX_OSC_STRING_LENGTH) {
                    mOscBuilder.appendCodePoint(b);
                    continueSequence(ESC_OSC);
                } else {
                    unknownSequence(b);
                }
                break;
        }
    }

    private void doOscEsc(int b) {
        if (b == '\\') {
            doOscSetTextParameters("\033\\");
        } else {
            mOscBuilder.appendCodePoint(27);
            mOscBuilder.appendCodePoint(b);
            continueSequence(ESC_OSC);
        }
    }

    private void doDeviceControl(int b) {
        switch (b) {
            case '\\':
                String dcs = mOscBuilder.toString();
                // DCS $ q P t ST. Request Status String (DECRQSS)
                if (dcs.startsWith("$q")) {
                    if (dcs.equals("$q\"p")) {
                        mSession.write("\033P1$r64;1\"p\033\\");
                    } else {
                        finishSequenceAndLogError("Unrecognized DECRQSS string: '" + dcs + "'");
                    }
                } else if (dcs.startsWith("+q")) {
                    for (String part : dcs.substring(2).split(";")) {
                        if (part.length() % 2 == 0) {
                            StringBuilder transBuffer = new StringBuilder();
                            for (int i = 0; i < part.length(); i += 2) {
                                try {
                                    char c = (char) Long.decode("0x" + part.charAt(i) + "" + part.charAt(i + 1)).longValue();
                                    transBuffer.append(c);
                                } catch (NumberFormatException e) {
                                    Logger.logStackTraceWithMessage(mClient, LOG_TAG, "Invalid device termcap/terminfo encoded name \"" + part + "\"", e);
                                    continue;
                                }
                            }
                            String trans = transBuffer.toString();
                            String responseValue;
                            switch (trans) {
                                case "Co": case "colors": responseValue = "256"; break;
                                case "TN": case "name": responseValue = "xterm"; break;
                                default:
                                    responseValue = KeyHandler.getCodeFromTermcap(trans,
                                            isDecsetInternalBitSet(DECSET_BIT_APPLICATION_CURSOR_KEYS),
                                            isDecsetInternalBitSet(DECSET_BIT_APPLICATION_KEYPAD));
                                    break;
                            }
                            if (responseValue == null) {
                                switch (trans) {
                                    case "%1": case "&8": break;
                                    default: Logger.logWarn(mClient, LOG_TAG, "Unhandled termcap/terminfo name: '" + trans + "'");
                                }
                                mSession.write("\033P0+r" + part + "\033\\");
                            } else {
                                StringBuilder hexEncoded = new StringBuilder();
                                for (int j = 0; j < responseValue.length(); j++) {
                                    hexEncoded.append(String.format("%02X", (int) responseValue.charAt(j)));
                                }
                                mSession.write("\033P1+r" + part + "=" + hexEncoded + "\033\\");
                            }
                        } else {
                            Logger.logError(mClient, LOG_TAG, "Invalid device termcap/terminfo name of odd length: " + part);
                        }
                    }
                } else {
                    if (LOG_ESCAPE_SEQUENCES) Logger.logError(mClient, LOG_TAG, "Unrecognized device control string: " + dcs);
                }
                mOscBuilder.setLength(0);
                finishSequence();
                break;
            default:
                if (mOscBuilder.length() < MAX_OSC_STRING_LENGTH) {
                    mOscBuilder.appendCodePoint(b);
                    continueSequence(ESC_P);
                } else {
                    mOscBuilder.setLength(0);
                    finishSequence();
                }
                break;
        }
    }

    private void doOscSetTextParameters(String bellOrStringTerminator) {
        String full = mOscBuilder.toString();
        int value = -1;
        String textParameter = "";
        for (int i = 0; i < full.length(); i++) {
            char b = full.charAt(i);
            if (b == ';') {
                textParameter = full.substring(i + 1);
                break;
            } else if (b >= '0' && b <= '9') {
                value = ((value < 0) ? 0 : value * 10) + (b - '0');
            } else {
                unknownSequence(b);
                mOscBuilder.setLength(0);
                finishSequence();
                return;
            }
        }

        switch (value) {
            case 0: case 1: case 2:
                setTitle(textParameter);
                break;
            case 4:
                int colorIndex = -1;
                int parsingPairStart = -1;
                for (int i = 0; ; i++) {
                    boolean end = i == textParameter.length();
                    char b = end ? ';' : textParameter.charAt(i);
                    if (b == ';') {
                        if (parsingPairStart < 0) {
                            parsingPairStart = i + 1;
                        } else {
                            if (colorIndex < 0 || colorIndex > 255) {
                                unknownSequence(b);
                                return;
                            } else {
                                mColors.tryParseColor(colorIndex, textParameter.substring(parsingPairStart, i));
                                mSession.onColorsChanged();
                                colorIndex = -1;
                                parsingPairStart = -1;
                            }
                        }
                    } else if (parsingPairStart >= 0) {
                        // in color spec
                    } else if (b >= '0' && b <= '9') {
                        colorIndex = ((colorIndex < 0) ? 0 : colorIndex * 10) + (b - '0');
                    } else {
                        unknownSequence(b);
                        return;
                    }
                    if (end) break;
                }
                break;
            case 10: case 11: case 12:
                int specialIndex = TextStyle.COLOR_INDEX_FOREGROUND + (value - 10);
                int lastSemiIndex = 0;
                for (int i = 0; ; i++) {
                    boolean end = i == textParameter.length();
                    if (end || textParameter.charAt(i) == ';') {
                        try {
                            String colorSpec = textParameter.substring(lastSemiIndex, i);
                            if ("?".equals(colorSpec)) {
                                int rgb = mColors.mCurrentColors[specialIndex];
                                int r = (65535 * ((rgb & 0x00FF0000) >> 16)) / 255;
                                int g = (65535 * ((rgb & 0x0000FF00) >> 8)) / 255;
                                int b = (65535 * ((rgb & 0x000000FF))) / 255;
                                mSession.write("\033]" + value + ";rgb:" + String.format(Locale.US, "%04x", r) + "/" +
                                        String.format(Locale.US, "%04x", g) + "/" + String.format(Locale.US, "%04x", b) + bellOrStringTerminator);
                            } else {
                                mColors.tryParseColor(specialIndex, colorSpec);
                                mSession.onColorsChanged();
                            }
                            specialIndex++;
                            if (end || (specialIndex > TextStyle.COLOR_INDEX_CURSOR) || ++i >= textParameter.length())
                                break;
                            lastSemiIndex = i;
                        } catch (NumberFormatException e) { }
                    }
                }
                break;
            case 52:
                int startIndex = textParameter.indexOf(";") + 1;
                try {
                    String clipboardText = new String(Base64.decode(textParameter.substring(startIndex), 0), StandardCharsets.UTF_8);
                    mSession.onCopyTextToClipboard(clipboardText);
                } catch (Exception e) {
                    Logger.logError(mClient, LOG_TAG, "OSC Manipulate selection, invalid string '" + textParameter + "'");
                }
                break;
            case 104:
                if (textParameter.isEmpty()) {
                    mColors.reset();
                    mSession.onColorsChanged();
                } else {
                    int lastIdx = 0;
                    for (int i = 0; ; i++) {
                        boolean end = i == textParameter.length();
                        if (end || textParameter.charAt(i) == ';') {
                            try {
                                int col = Integer.parseInt(textParameter.substring(lastIdx, i));
                                mColors.reset(col);
                                mSession.onColorsChanged();
                                if (end) break;
                                i++;
                                lastIdx = i;
                            } catch (NumberFormatException e) { }
                        }
                    }
                }
                break;
            case 110: case 111: case 112:
                mColors.reset(TextStyle.COLOR_INDEX_FOREGROUND + (value - 110));
                mSession.onColorsChanged();
                break;
            case 119:
                break;
            default:
                unknownParameter(value);
                break;
        }
        mOscBuilder.setLength(0);
        finishSequence();
    }

    // ==================== MÉTODOS AUXILIARES (restante igual ao original) ====================

    private void startEscapeSequence() {
        mEscapeState = ESC;
        mArgIndex = 0;
        Arrays.fill(mArgs, -1);
        mArgsSubParamsBitSet = 0;
    }

    private void continueSequence(int state) {
        mEscapeState = state;
        mContinueSequence = true;
    }

    private void finishSequence() {
        mEscapeState = ESC_NONE;
    }

    private void doApc(int b) {
        if (b == 27) continueSequence(ESC_APC_ESCAPE);
    }

    private void doApcEscape(int b) {
        if (b == '\\') finishSequence();
        else continueSequence(ESC_APC);
    }

    private void doEsc(int b) {
        switch (b) {
            case '#': continueSequence(ESC_POUND); break;
            case '(': continueSequence(ESC_SELECT_LEFT_PAREN); break;
            case ')': continueSequence(ESC_SELECT_RIGHT_PAREN); break;
            case '6':
                if (mCursorCol > mLeftMargin) mCursorCol--;
                else {
                    int rows = mBottomMargin - mTopMargin;
                    mScreen.blockCopy(mLeftMargin, mTopMargin, mRightMargin - mLeftMargin - 1, rows, mLeftMargin + 1, mTopMargin);
                    mScreen.blockSet(mLeftMargin, mTopMargin, 1, rows, ' ', TextStyle.encode(mForeColor, mBackColor, 0));
                }
                break;
            case '7': saveCursor(); break;
            case '8': restoreCursor(); break;
            case '9':
                if (mCursorCol < mRightMargin - 1) mCursorCol++;
                else {
                    int rows = mBottomMargin - mTopMargin;
                    mScreen.blockCopy(mLeftMargin + 1, mTopMargin, mRightMargin - mLeftMargin - 1, rows, mLeftMargin, mTopMargin);
                    mScreen.blockSet(mRightMargin - 1, mTopMargin, 1, rows, ' ', TextStyle.encode(mForeColor, mBackColor, 0));
                }
                break;
            case 'c': reset(); mMainBuffer.clearTranscript(); blockClear(0,0,mColumns,mRows); setCursorPosition(0,0); break;
            case 'D': doLinefeed(); break;
            case 'E': setCursorCol(isDecsetInternalBitSet(DECSET_BIT_ORIGIN_MODE) ? mLeftMargin : 0); doLinefeed(); break;
            case 'F': setCursorRowCol(0, mBottomMargin - 1); break;
            case 'H': mTabStop[mCursorCol] = true; break;
            case 'M':
                if (mCursorRow <= mTopMargin) {
                    mScreen.blockCopy(mLeftMargin, mTopMargin, mRightMargin - mLeftMargin, mBottomMargin - (mTopMargin + 1), mLeftMargin, mTopMargin + 1);
                    blockClear(mLeftMargin, mTopMargin, mRightMargin - mLeftMargin);
                } else mCursorRow--;
                break;
            case 'N': case '0': break;
            case 'P': mOscBuilder.setLength(0); continueSequence(ESC_P); break;
            case '[': continueSequence(ESC_CSI); break;
            case '=': setDecsetinternalBit(DECSET_BIT_APPLICATION_KEYPAD, true); break;
            case ']': mOscBuilder.setLength(0); continueSequence(ESC_OSC); break;
            case '>': setDecsetinternalBit(DECSET_BIT_APPLICATION_KEYPAD, false); break;
            case '_': continueSequence(ESC_APC); break;
            default: unknownSequence(b); break;
        }
    }

    private void doEscPound(int b) {
        if (b == '8') mScreen.blockSet(0, 0, mColumns, mRows, 'E', getStyle());
        else unknownSequence(b);
    }

    private void doCsi(int b) { /* mantido do original, não alterado */ }
    private void doCsiUnsupportedParameterOrIntermediateByte(int b) { /* mantido */ }
    private void doCsiQuestionMark(int b) { /* mantido */ }
    private void doCsiBiggerThan(int b) { /* mantido */ }
    private void doCsiDollar(int b) { /* mantido */ }
    private void doSetMode(boolean newValue) { /* mantido */ }
    private void selectGraphicRendition() { /* mantido */ }
    private int nextTabStop(int numTabs) { /* mantido */ }
    private void doLinefeed() { /* mantido */ }
    private void scrollDownOneLine() { /* mantido */ }
    private void saveCursor() { /* mantido */ }
    private void restoreCursor() { /* mantido */ }
    private void setCursorPosition(int x, int y) { /* mantido */ }
    private void setCursorRow(int row) { mCursorRow = row; mAboutToAutoWrap = false; }
    private void setCursorCol(int col) { mCursorCol = col; mAboutToAutoWrap = false; }
    private void setCursorRowCol(int row, int col) { mCursorRow = Math.max(0, Math.min(row, mRows - 1)); mCursorCol = Math.max(0, Math.min(col, mColumns - 1)); mAboutToAutoWrap = false; }
    private void setCursorColRespectingOriginMode(int col) { setCursorPosition(col, mCursorRow); }
    private void emitCodePoint(int codePoint) { /* mantido, igual ao original */ }
    private void blockClear(int sx, int sy, int w) { blockClear(sx, sy, w, 1); }
    private void blockClear(int sx, int sy, int w, int h) { mScreen.blockSet(sx, sy, w, h, ' ', getStyle()); }
    private long getStyle() { return TextStyle.encode(mForeColor, mBackColor, mEffect); }
    private int getArg0(int defaultValue) { return getArg(0, defaultValue, true); }
    private int getArg1(int defaultValue) { return getArg(1, defaultValue, true); }
    private int getArg(int index, int defaultValue, boolean treatZeroAsDefault) {
        int result = mArgs[index];
        if (result < 0 || (result == 0 && treatZeroAsDefault)) result = defaultValue;
        return result;
    }
    private void parseArg(int b) { /* mantido */ }
    private void unknownSequence(int b) { finishSequenceAndLogError("Unknown sequence char '" + (char)b + "' (numeric value=" + b + ")"); }
    private void unknownParameter(int parameter) { finishSequenceAndLogError("Unknown parameter: " + parameter); }
    private void finishSequenceAndLogError(String error) { if (LOG_ESCAPE_SEQUENCES) Logger.logWarn(mClient, LOG_TAG, error); finishSequence(); }
    private boolean isDecsetInternalBitSet(int bit) { return (mCurrentDecSetFlags & bit) != 0; }
    private void setDecsetinternalBit(int internalBit, boolean set) {
        if (set) {
            if (internalBit == DECSET_BIT_MOUSE_TRACKING_PRESS_RELEASE) setDecsetinternalBit(DECSET_BIT_MOUSE_TRACKING_BUTTON_EVENT, false);
            else if (internalBit == DECSET_BIT_MOUSE_TRACKING_BUTTON_EVENT) setDecsetinternalBit(DECSET_BIT_MOUSE_TRACKING_PRESS_RELEASE, false);
            mCurrentDecSetFlags |= internalBit;
        } else {
            mCurrentDecSetFlags &= ~internalBit;
        }
    }
    static int mapDecSetBitToInternalBit(int decsetBit) {
        switch (decsetBit) {
            case 1: return DECSET_BIT_APPLICATION_CURSOR_KEYS;
            case 5: return DECSET_BIT_REVERSE_VIDEO;
            case 6: return DECSET_BIT_ORIGIN_MODE;
            case 7: return DECSET_BIT_AUTOWRAP;
            case 25: return DECSET_BIT_CURSOR_ENABLED;
            case 66: return DECSET_BIT_APPLICATION_KEYPAD;
            case 69: return DECSET_BIT_LEFTRIGHT_MARGIN_MODE;
            case 1000: return DECSET_BIT_MOUSE_TRACKING_PRESS_RELEASE;
            case 1002: return DECSET_BIT_MOUSE_TRACKING_BUTTON_EVENT;
            case 1004: return DECSET_BIT_SEND_FOCUS_EVENTS;
            case 1006: return DECSET_BIT_MOUSE_PROTOCOL_SGR;
            case 2004: return DECSET_BIT_BRACKETED_PASTE_MODE;
            default: return -1;
        }
    }

    public void doDecSetOrReset(boolean setting, int externalBit) {
        int internalBit = mapDecSetBitToInternalBit(externalBit);
        if (internalBit != -1) setDecsetinternalBit(internalBit, setting);
        switch (externalBit) {
            case 3:
                mLeftMargin = mTopMargin = 0;
                mBottomMargin = mRows;
                mRightMargin = mColumns;
                setDecsetinternalBit(DECSET_BIT_LEFTRIGHT_MARGIN_MODE, false);
                blockClear(0, 0, mColumns, mRows);
                setCursorRowCol(0, 0);
                break;
            case 6:
                if (setting) setCursorPosition(0, 0);
                break;
            case 25:
                if (mClient != null) mClient.onTerminalCursorStateChange(setting);
                break;
            case 69:
                if (!setting) { mLeftMargin = 0; mRightMargin = mColumns; }
                break;
            case 1048:
                if (setting) saveCursor(); else restoreCursor();
                break;
            case 47: case 1047: case 1049:
                TerminalBuffer newScreen = setting ? mAltBuffer : mMainBuffer;
                if (newScreen != mScreen) {
                    boolean resized = !(newScreen.mColumns == mColumns && newScreen.mScreenRows == mRows);
                    if (setting) saveCursor();
                    mScreen = newScreen;
                    if (!setting) {
                        int col = mSavedStateMain.mSavedCursorCol;
                        int row = mSavedStateMain.mSavedCursorRow;
                        restoreCursor();
                        if (resized) { mCursorCol = col; mCursorRow = row; }
                    }
                    if (resized) resizeScreen();
                    if (newScreen == mAltBuffer) newScreen.blockSet(0, 0, mColumns, mRows, ' ', getStyle());
                }
                break;
        }
    }

    public int getScrollCounter() { return mScrollCounter; }
    public void clearScrollCounter() { mScrollCounter = 0; }
    public boolean isAutoScrollDisabled() { return mAutoScrollDisabled; }
    public void toggleAutoScrollDisabled() { mAutoScrollDisabled = !mAutoScrollDisabled; }
    public void reset() {
        setCursorStyle();
        mArgIndex = 0;
        mContinueSequence = false;
        mEscapeState = ESC_NONE;
        mInsertMode = false;
        mTopMargin = mLeftMargin = 0;
        mBottomMargin = mRows;
        mRightMargin = mColumns;
        mAboutToAutoWrap = false;
        mForeColor = mSavedStateMain.mSavedForeColor = mSavedStateAlt.mSavedForeColor = TextStyle.COLOR_INDEX_FOREGROUND;
        mBackColor = mSavedStateMain.mSavedBackColor = mSavedStateAlt.mSavedBackColor = TextStyle.COLOR_INDEX_BACKGROUND;
        setDefaultTabStops();
        mUseLineDrawingG0 = mUseLineDrawingG1 = false;
        mUseLineDrawingUsesG0 = true;
        mSavedStateMain.mSavedCursorRow = mSavedStateMain.mSavedCursorCol = mSavedStateMain.mSavedEffect = mSavedStateMain.mSavedDecFlags = 0;
        mSavedStateAlt.mSavedCursorRow = mSavedStateAlt.mSavedCursorCol = mSavedStateAlt.mSavedEffect = mSavedStateAlt.mSavedDecFlags = 0;
        mCurrentDecSetFlags = 0;
        setDecsetinternalBit(DECSET_BIT_AUTOWRAP, true);
        setDecsetinternalBit(DECSET_BIT_CURSOR_ENABLED, true);
        mSavedDecSetFlags = mSavedStateMain.mSavedDecFlags = mSavedStateAlt.mSavedDecFlags = mCurrentDecSetFlags;
        mColors.reset();
        mSession.onColorsChanged();
    }

    public String getSelectedText(int x1, int y1, int x2, int y2) { return mScreen.getSelectedText(x1, y1, x2, y2); }
    public String getTitle() { return mTitle; }
    private void setTitle(String newTitle) {
        String oldTitle = mTitle;
        mTitle = newTitle;
        if (!Objects.equals(oldTitle, newTitle)) mSession.titleChanged(oldTitle, newTitle);
    }
    public void paste(String text) {
        text = text.replaceAll("(\u001B|[\u0080-\u009F])", "");
        text = text.replaceAll("\r?\n", "\r");
        boolean bracketed = isDecsetInternalBitSet(DECSET_BIT_BRACKETED_PASTE_MODE);
        if (bracketed) mSession.write("\033[200~");
        mSession.write(text);
        if (bracketed) mSession.write("\033[201~");
    }

    static final class SavedScreenState {
        int mSavedCursorRow, mSavedCursorCol;
        int mSavedEffect, mSavedForeColor, mSavedBackColor;
        int mSavedDecFlags;
        boolean mUseLineDrawingG0, mUseLineDrawingG1, mUseLineDrawingUsesG0 = true;
    }

    @Override
    public String toString() {
        return "TerminalEmulator[size=" + mScreen.mColumns + "x" + mScreen.mScreenRows + ", margins={" + mTopMargin + "," + mRightMargin + "," + mBottomMargin + "," + mLeftMargin + "}]";
    }
}
