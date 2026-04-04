# termux-app-rafacodephi — Code Geometry Reality (2026-04-03)

## Purpose

This file documents the **code geometry** of this fork.

The existing documentation remains useful as:
- compatibility map
- build / troubleshooting guide
- Android 15/16 framing
- attribution / provenance

However, the **actual implementation shape is more direct, lower-level, and more code-centric than the documentation alone suggests**.

## Main rule

For this repository, use the following reading order:
1. documentation for orientation
2. code for truth

## What the code shows more clearly than the docs

### 1. Java is used as a control layer, not as a heavy abstraction layer
Important paths are intentionally direct and procedural.

Representative example:
- `app/src/main/java/com/termux/app/TermuxInstaller.java`

That file shows a style centered on:
- explicit validation
- explicit staging / prefix handling
- explicit zip extraction
- explicit symlink creation
- explicit error reporting
- thread-based execution with minimal ornamental abstraction

### 2. Native / bare-metal path is a real part of the repository architecture
Representative example:
- `app/src/main/java/com/termux/lowlevel/BareMetal.java`

This class is not a decorative wrapper.
It exposes a JNI bridge to low-level native capabilities including:
- architecture and capability detection
- vector math
- matrix operations
- fast math primitives
- memory operations
- hardware profile reading

### 3. Assembly and SIMD are part of the design, not marketing language
Representative example:
- `app/src/main/cpp/lowlevel/baremetal_asm.S`

The repository includes explicit low-level optimized paths for ARM / AArch64 with operations such as:
- vector dot product
- vector addition
- memcpy-style transfer

This means the fork should be read as:
- Android application layer
- direct Java control layer
- thin JNI bridge
- native C / ASM execution paths

### 4. The fork is not only about packaging or branding
The package-name split and Android 15/16 compatibility work matter, but the code goes beyond package renaming.
It also introduces a real low-level execution philosophy based on:
- deterministic helper paths
- bare-metal style primitives
- defensive bootstrap behavior
- reduced abstraction in critical flows

## Code-first interpretation of the fork

This repository should be understood as having three stacked planes:

### Plane A — application / Android integration
- manifests
- activities
- preferences
- compatibility handling
- package identity

### Plane B — control / bootstrap / execution
- installer
- storage setup
- environment preparation
- defensive host checks

### Plane C — native / low-level execution
- JNI
- C helpers
- SIMD / assembly
- capability masks
- deterministic math / memory primitives

## Why this note exists

Some readers may infer from the docs that the fork is primarily:
- a compatibility patch set
- a branding/package split
- an Android 15/16 adaptation

That reading is incomplete.

The code shows that this fork also pursues a lower-level execution model where:
- Java stays relatively thin in critical paths
- native code is intentionally elevated
- SIMD/ASM are part of the real runtime story

## Recommended maintenance rule

When this repository evolves:
- keep compatibility docs and troubleshooting docs updated
- add code-reality notes when the low-level architecture changes materially
- avoid describing the fork only through UI/build/package language

## Short maintainer summary

> Documentation points to the roads.
> Code defines the machine.

For this repository, the machine is:
- Android control
- direct bootstrap flow
- bare-metal JNI bridge
- C / ASM assisted execution
