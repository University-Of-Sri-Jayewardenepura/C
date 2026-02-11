## C Programming for Beginners

Welcome! This repo is a hands-on path to learn C from zero to confident beginner, using short lessons and small programs you can compile and run locally.

### Quick start
- Prerequisite: a C compiler (macOS has clang by default; `gcc` also works)
- Build all examples with make (see below)
- Prefer VS Code? Install the C/C++ extension and open this folder

### How to build and run
- Build all example programs into `bin/examples/`:
  - make examples
- List available examples:
  - make list-examples
- Build one example:
  - make ex-hello_world
- Run one example:
  - make run-hello_world

If you don't use make:
- clang -std=c11 -Wall -Wextra -O0 -g -o bin/hello_world src/01_intro/hello_world.c

### Curriculum

| # | Topic | Lesson | Source |
|---|-------|--------|--------|
| 1 | Introduction to Programming | [docs](docs/en/introduction-to-programming.mdx) | — |
| 2 | Introduction to C Programming | [docs](docs/en/introduction-to-c.mdx) | [src](src/01_intro/hello_world.c) |
| 3 | C Fundamentals | [docs](docs/en/c-fundamentals.mdx) | [src](src/02_basics/variables.c) |
| 4 | Operators in C | [docs](docs/en/operators.mdx) | [src](src/03_operators/operators.c) |
| 5 | Control Structures | [docs](docs/en/control-structures.mdx) | [src](src/04_control_flow/) |
| 6 | Functions | [docs](docs/en/functions.mdx) | [src](src/05_functions/functions.c) |
| 7 | Arrays | [docs](docs/en/arrays.mdx) | [src](src/06_arrays/arrays.c) |
| 8 | Strings | [docs](docs/en/strings.mdx) | [src](src/07_strings/strings.c) |
| 9 | Pointers | [docs](docs/en/pointers.mdx) | [src](src/08_pointers/pointers.c) |
| 10 | Structures, Unions, Enums | [docs](docs/en/structs-unions-enums.mdx) | [src](src/09_structs/structs.c) |
| 11 | File Handling | [docs](docs/en/file-handling.mdx) | [src](src/10_files/file_io.c) |
| 12 | Advanced Topics | [docs](docs/en/advanced-topics.mdx) | [src](src/11_advanced/malloc_recursion_args.c) |

### Learn by example
Browse 41 runnable examples with tri-lingual comments (EN/SI/TA): [examples/](examples/README.md)

---

### Repo structure

```
docs/
  en/          ← lessons in English (.mdx, source of truth)
  si/          ← Sinhala translations (optional)
  ta/          ← Tamil translations (optional)
src/           ← compilable lesson source code
examples/      ← 41 standalone example programs
Makefile       ← build commands
```

### Syllabus Outline

#### 1. Introduction to Programming
- History of Programming (Hero of Alexandria, Jacquard Loom, Babbage, Lovelace, Turing, Ritchie)
- Compilers and Interpreters
- High-Level vs. Low-Level Languages

#### 2. Introduction to C Programming
- Features of C
- C Standards (ANSI C, C99, C11)
- First C Program (Hello, World!)
- Compilation Process (Preprocessor, Compiler, Assembler, Linker, Loader)

#### 3. C Fundamentals
- Variables (declaration, assignment, scope)
- Constants (`#define`, `const`)
- Data Types (char, int, float, double, void; derived and user-defined)
- Type Qualifiers (short, long, signed, unsigned)

#### 4. Operators in C
- Arithmetic, Relational, Logical, Bitwise, Assignment, Misc (sizeof, &, *, ?:)
- Operator Precedence and Associativity

#### 5. Control Structures
- Branching: if/else, else if, switch, ?: operator
- Looping: while, do-while, for

#### 6. Functions
- Definition/Declaration, Parameters/Returns, Call flow, Scope rules

#### 7. Arrays
- Declaration/Initialization, Access, Passing to functions, Multidimensional

#### 8. Strings
- Initialization and termination (\0), I/O, Manipulation APIs, Examples

#### 9. Pointers
- Basics, Dereference, Arithmetic, Arrays/Strings, Double pointers

#### 10. Structures, Unions, and Enumerations
- Structures, Unions, Enums

#### 11. File Handling in C
- Open/Read/Write/Close, Modes (`r`, `w`, `a`)

#### 12. Advanced Topics
- Dynamic memory (`malloc`, `free`), Recursion, Command-line arguments
