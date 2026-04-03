# CLI Calculator

A command-line calculator implemented in C, designed to demonstrate fundamental programming concepts including input handling, control flow, and modular code organization.

## Overview

This application provides a command-line interface for performing basic arithmetic operations with input validation.

## Features

- Supports basic arithmetic operations:
  - Addition (+)
  - Subtraction (-)
  - Multiplication (\*)
  - Division (/)
- Input validation for numeric values and operators
- Interactive command-line interface
- Modular structure with separate header and source files

## Project Structure

```text
cli-calculator/
├── main.c
├── calculator.c
├── calculator.h
├── utils.c
├── utils.h
└── Makefile
```

## How It Works

The application follows a simple execution flow:

1. The user selects an operation
2. Numeric input is collected and validated
3. The selected operation is executed
4. The result is displayed in the terminal

## Core Concepts

### Input Handling & Validation

User input is validated to ensure correct data types and prevent invalid operations, such as division by zero.

### Control Flow

Conditional logic (`if-else` / `switch`) is used to determine the operation to be performed based on user input.

### Modular Design

The application is divided into multiple modules to separate responsibilities and improve maintainability:

- `calculator.h/c` → Implements arithmetic operations
- `utils.h/c` → Handles input validation and utility functions
- `main.c` → Manages program flow and user interaction

## Architecture

The system follows a simple modular architecture:

- `main.c`  
  Acts as the entry point and coordinates user interaction and program flow.

- `calculator.h/c`  
  Contains the core computation logic for arithmetic operations.

- `utils.h/c`  
  Provides helper functions for input validation and general utilities.

This structure ensures a clear separation between computation logic and user interface handling.

## Build & Run

Using Makefile:

```bash
make
./cli-calculator
```

Or manual compilation:

```bash
gcc main.c calculator.c utils.c -o cli-calculator
./cli-calculator
```

## Notes

This project provides a foundational implementation of a modular command-line application in C.
