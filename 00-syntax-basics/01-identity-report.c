#include <stdio.h>   // Provides input/output functions (printf, scanf, getchar)
#include <ctype.h>   // Provides character validation functions (isalpha)

/*
    =========================================
    PROGRAM: System Identity & Memory Analysis
    =========================================

    This program demonstrates:
    - Safe user input handling using scanf
    - Input validation (character and integer)
    - Input buffer management
    - Basic memory concepts (addresses & pointers)
*/

int main(void) {
    /*
        Entry Point of the Program:

        - int main(void)
          → Defines the starting point of program execution.

        - int:
          → The function returns an integer (exit status) to the OS.
            0   = success
            non-zero = error

        - void:
          → Indicates that this function takes no arguments.
            This is the correct and explicit form in C.
    */

    /*
        =========================
        VARIABLE DECLARATIONS
        =========================
    */

    char initial;  
    /*
        - Stores a single character (user's name initial)
        - Typically occupies 1 byte in memory
    */

    int age;       
    /*
        - Stores an integer value (user's age)
        - Typically occupies 4 bytes (platform-dependent)
    */


    printf("====== System Identity Report ======\n");

    /*
        =========================
        INPUT: NAME INITIAL
        =========================
    */
    printf("Enter your name initial (1 letter): ");

    /*
        scanf(" %c", &initial)

        Detailed Explanation:

        - Leading space (" ")
          → Skips any leftover whitespace or newline from previous input.
          → Prevents accidental reading of '\n' from buffer.

        - %c
          → Reads exactly ONE character (including whitespace if not handled).

        - &initial
          → Passes the memory address of variable 'initial'
          → scanf writes the input directly into this memory location

        VALIDATION:

        - scanf(...) == 1
          → Ensures exactly 1 input item was successfully read

        - isalpha(initial)
          → Ensures input is a valid alphabet character (A-Z or a-z)
    */
    if (scanf(" %c", &initial) == 1 && isalpha(initial)) {

        /*
            INPUT BUFFER VALIDATION:

            - getchar() reads the next character from input buffer

            Why this matters:
            → If user types more than one character (e.g., "AB"),
              scanf("%c") will only take 'A'
              BUT 'B' remains in buffer

            - If getchar() != '\n'
              → Means extra unwanted input exists
        */
        if (getchar() != '\n') {
            printf("\n[ERROR] Too many characters! Please enter only one letter!\n");
            return 1;
        }

    } else {
        printf("\n[ERROR] Invalid input! Please enter a single alphabet character!\n");
        return 1;
    }


    /*
        =========================
        INPUT: AGE
        =========================
    */
    printf("Enter your age: ");

    /*
        scanf("%d", &age)

        Explanation:

        - %d
          → Reads an integer value

        - &age
          → Passes memory address where the result will be stored

        IMPORTANT BEHAVIOR:

        - scanf returns the number of successfully read items

        Example:
        → Input "25"  → return 1 (success)
        → Input "abc" → return 0 (failure)

        This allows us to detect invalid numeric input
    */
    if (scanf("%d", &age) != 1) {
        printf("ERROR: Please enter a valid number for age!\n");
        return 1;
    }


    /*
        =========================
        OUTPUT: DATA REPORT
        =========================
    */
    printf("\n====== Memory Analysis Report ======\n");

    /*
        Displaying values:

        - %c → prints character
        - %d → prints integer
               (also used to display ASCII value of char)
    */
    printf("Initial (Char)  : [%c]\n", initial);
    printf("Initial (ASCII) : %d\n", initial);
    printf("Age             : %d\n", age);


    /*
        =========================
        MEMORY ADDRESS ANALYSIS
        =========================
    */

    /*
        POINTER & MEMORY CONCEPT:

        - &initial / &age
          → Retrieves the memory address of variables

        - %p
          → Used to print memory addresses (pointers)

        - (void*)
          → Casts pointer to generic pointer type

        WHY (void*)?

        → According to C standard, %p expects (void*)
        → Ensures compatibility and avoids compiler warnings
        → Represents a "generic pointer" (can point to any data type)
    */
    printf("Memory Address of 'initial' variable : %p\n", (void*)&initial);
    printf("Memory Address of 'age' variable     : %p\n", (void*)&age);


    /*
        PROGRAM TERMINATION:

        - return 0;
          → Indicates successful execution to the operating system
    */
    return 0;
}