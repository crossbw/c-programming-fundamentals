# 08 - Data Persistence & Struct Arrays

This module demonstrates the implementation of data persistence in C using structured data and binary file storage. The project extends the Mini ERP system by introducing file-based storage, allowing data to be saved and reloaded across program executions.

## Overview

The persistent Mini ERP system is a console-based application designed to manage item data and store it on disk. It simulates a basic data lifecycle, including in-memory processing and persistent storage.

## Project Structure

```text
├── main.c
├── invoice.c
├── invoice.h
├── utils.c
├── utils.h
├── Makefile
└── database.dat
```

## How It Works

The application collects item data from user input and stores it in memory using an array of structs.  
It is then written to a binary file for persistence. When needed, the application reads the file and reconstructs the data back into memory.

This process simulates a simple data lifecycle between runtime memory and physical storage.

## Core Concepts

### Array of Structs

Data is stored using an array of `struct`, allowing multiple fields (such as name, price, and quantity) to be grouped into a single entity and managed efficiently in memory.

### Dynamic Memory Allocation

Memory is allocated at runtime using `malloc`, based on the number of items provided by the user.
Allocated memory is properly released using `free` to prevent memory leaks.

### Binary File I/O

The system uses binary files (`.dat`) for efficient data storage:

- `fwrite` is used to write raw memory blocks directly to disk.
- `fread` is used to read and reconstruct data from disk into memory.

Binary format improves performance and storage efficiency, although it is not human-readable.

### Data Lifecycle

The application follows a simple data flow:

- **Input Phase** → Data is collected and stored in memory
- **Persistence Phase** → Data is written from memory to disk
- **Retrieval Phase** → Data is loaded from disk back into memory

## Architecture

The project maintains a modular structure:

- `main.c`: Handles program flow, including input, save, and load operations
- `invoice.h/c`: Implements data processing and file persistence logic
- `utils.h/c`: Provides utility functions for terminal output and formatting
- `Makefile`: Automates build and cleanup processes

## How to Build and Run

Make sure you are in the project root directory:

```bash
make
./persistent_erp
```

To inspect the binary file content:

```bash
hexdump -C database.dat
```

## Notes

This project serves as a foundational implementation of data persistence and memory management in C using binary file storage.
