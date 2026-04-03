# 07 - Modular Programming & Build Automation

This module demonstrates the implementation of modular programming principles in C, along with a basic build automation workflow using `make`. The project is structured to improve maintainability, scalability, and clarity by separating responsibilities across multiple components.

## Overview

The Mini ERP system is a simple console-based application designed to handle basic invoice processing operations.

## Project Structure

```text
├── main.c
├── invoice.c
├── invoice.h
├── utils.c
├── utils.h
└── Makefile
```

## How It Works

The application starts in `main.c`, where user input is collected and processed before being passed to other modules.
It is then handled by the `invoice` module for calculation logic, while the `utils` module manages output formatting and display.

This separation ensures a clear distinction between business logic and presentation.

## Core Concepts

### Header Files & Interfaces

Header files (`.h`) define the public interface of each module. They expose function prototypes and shared declarations, allowing different parts of the program to communicate in a controlled way.

Header guards are used to prevent multiple inclusions during compilation:

```c
#ifndef FILE_NAME_H
#define FILE_NAME_H

// declarations

#endif
```

### Separation of Concerns

The system is divided into independent modules, each responsible for a specific task. This improves code readability, maintainability, and scalability.

### Compilation & Linking

Each source file is compiled into an object file (`.o`) using the `-c` flag. These object files are then linked together to produce the final executable.

### Build Automation

A `Makefile` is used to automate the build process. It ensures that only modified files are recompiled based on file timestamps, improving efficiency.

## Architecture

The project follows a modular architecture with clearly defined responsibilities:

- `main.c`  
  Acts as the entry point and orchestrates the overall program flow, including user interaction.

- `invoice.h/c`  
  Contains business logic related to invoice calculations such as totals and discounts.

- `utils.h/c`  
  Provides utility functions for formatting and user interface output.

This structure enforces a clear boundary between core logic and supporting functionality.

## How to Build

Make sure you are in the project root directory:

```bash
make
./mini_erp_system
```

## Notes

This project serves as a foundational implementation of modular programming and build automation in C.
