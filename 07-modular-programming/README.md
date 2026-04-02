# 07 - Modular Programming & Build Automation

This module represents a key milestone in my C fundamentals journey. It focuses on transitioning from monolithic code (single-file programs) to a modular system by applying principles such as separation of concerns, dependency management, and build automation in a Linux environment.

## Key Concepts Learned

### 1. Header Files (.h) & Prototypes

- Defined interfaces ("contracts") between different parts of the system.
- Learned about **Header Guards** (`#ifndef`, `#define`, `#endif`) to prevent redefinition errors during preprocessing.

### 2. Separation of Concerns

Divided the Mini ERP system into specialized modules:

- `invoice.h/c`: Business logic for calculations (totals, discounts).
- `utils.h/c`: Utility functions (UI formatting, banners).
- `main.c`: The entry point and application orchestrator.

### 3. Object Files (.o) & Linking

- Compiled individual source files into object files using the `-c` flag in GCC.
- Understood the linking process where multiple `.o` files are combined into a single executable.

### 4. Build Automation with Makefile

- Created a `Makefile` to automate the build process.
- Understood how `make` uses file timestamps to recompile only modified files, improving build efficiency.

## How to Build

Make sure you are in the project root directory:

```bash
make
./mini_erp_system
```
