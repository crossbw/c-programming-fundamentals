# 08 - Data Persistence & Struct Arrays

This is the final module of my C fundamentals journey. In this section, I integrated multiple advanced concepts to build a persistent Mini-ERP system that stores data on physical storage in my Fedora Linux environment.

## Key Concepts Learned

### 1. Array of Structs

- Managed a collection of data objects (`Item`) using a contiguous block of memory.
- Used `struct` to group multiple data types (name, price, qty) into a single entity.

### 2. Dynamic Memory Allocation (Advanced)

- Allocated memory dynamically using `malloc` based on user input (number of items).
- Learned proper memory deallocation using `free` to prevent memory leaks in a production-like environment.

### 3. Binary File I/O (`.dat`)

- Transitioned from plain text (`.txt`) to binary format (`.dat`) for improved efficiency.
- Used `fwrite` to write raw memory blocks directly to disk.
- Used `fread` to reconstruct data from disk back into memory.
- Observed that binary files are not human-readable via tools like `cat`, but are more efficient for machine processing.

### 4. Data Lifecycle Management

- **Input Phase:** Collect data into RAM.
- **Persistence Phase:** Save data from RAM to disk.
- **Retrieval Phase:** Load data from disk back into RAM (simulating application restart).

## System Architecture

The project follows the modular structure developed in previous modules:

- `main.c`: Orchestrates input, save, and load operations.
- `invoice.h/c`: Handles binary storage logic and calculations.
- `utils.h/c`: Manages terminal UI and formatting.
- `Makefile`: Automates build and cleanup processes.

## How to Run

```bash
make
./persistent_erp
hexdump -C database.dat
```
