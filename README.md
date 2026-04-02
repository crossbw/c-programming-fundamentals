# C Programming Fundamentals

This repository documents my journey in learning the C programming language from scratch, with a strong focus on low-level concepts such as memory management, pointers, and program logic.

The goal of this project is to build a solid foundation in how software interacts with memory and system resources.

## Environment

- **OS:** Linux (Fedora KDE Plasma)
- **Compiler:** GCC
- **Tools:** VS Code, Konsole

## Project Structure

The learning process is organized into modular sections:

- `00-syntax-basics` — Initial setup and fundamental C syntax.
- `01-data-anatomy` — Data types, memory sizes, and limits.
- `02-logic-control` — Control flow: conditionals (`if-else`, `switch`) and loops (`for`, `while`, `do-while`).
- `03-data-structures-basic` — Arrays, strings, and structs.
- `04-memory-pointer` — Memory addresses, pointers, dereferencing, and pass-by-reference.
- `05-advanced-memory` — Dynamic memory allocation using `malloc` and `realloc`.
- `06-files-and-io` — File handling using text-based storage (`.txt`).
- `07-modular-programming` — Code modularization using header/source files, header guards, and build automation with **Makefiles**.
- `08-persistence` — Data persistence using binary file I/O (`.dat`) and dynamic struct arrays.

## Key Learnings

- Manual memory management and memory safety practices.
- Differences between stack and heap allocation.
- Direct memory manipulation using pointers.
- Designing and implementing a CLI-based mini ERP/invoicing system.

## Future Plans

- Implement advanced data structures (linked lists, stacks, queues).
- Develop a more complete CLI-based application.
- Explore simple file-based database systems in C.

## How to Run

To compile and run a program:

```bash
gcc filename.c -o output_name
./output_name
```
