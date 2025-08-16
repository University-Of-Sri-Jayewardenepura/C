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

If you don’t use make:
- clang -std=c11 -Wall -Wextra -O0 -g -o bin/hello_world src/01_intro/hello_world.c

### Curriculum menu
- [1. Introduction to Programming](docs/01-introduction-to-programming.md)
- [2. Introduction to C Programming](docs/02-introduction-to-c.md)
- [3. C Fundamentals](docs/03-c-fundamentals.md)
- [4. Operators in C](docs/04-operators.md)
- [5. Control Structures](docs/05-control-structures.md)
- [6. Functions](docs/06-functions.md)
- [7. Arrays](docs/07-arrays.md)
- [8. Strings](docs/08-strings.md)
- [9. Pointers](docs/09-pointers.md)
- [10. Structures, Unions, and Enumerations](docs/10-structs-unions-enums.md)
- [11. File Handling in C](docs/11-file-handling.md)
- [12. Advanced Topics](docs/12-advanced-topics.md)

### Learn by example
- Browse runnable examples with tri-lingual kid-friendly comments: [examples](examples/README.md)

---

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