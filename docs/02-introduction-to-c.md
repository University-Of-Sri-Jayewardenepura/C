# 2. Introduction to C Programming

C is a small, fast, portable systems programming language that powers operating systems, databases, and embedded devices.

## Features of C
- Small core language with powerful composition
- Close to hardware, predictable performance
- Portable across architectures

## C standards
- ANSI C (C89/C90), C99, C11 (and later like C17)
- We’ll use `-std=c11` for examples

## Your first C program
See `src/01_intro/hello_world.c`.

To build via make:
- make hello_world

To run:
- ./bin/hello_world

## The compilation pipeline
1. Preprocessor expands macros and includes headers
2. Compiler turns C into assembly/object code
3. Assembler produces `.o` files
4. Linker combines objects and libraries into an executable
5. Loader maps the program into memory to run

Next: 3. C Fundamentals → ../docs/03-c-fundamentals.md
