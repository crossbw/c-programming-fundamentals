#include <stdio.h>

int main () {
    char initial;
    char age;

    printf("====== System Identity Report ======\n");

    // Input initial
    printf("Enter your name initial (1 letter): ");
    /* Space before %c skips any newline characters from previous inputs */
    scanf(" %c", &initial);

    // Input age
    printf("Input your age: ");
    scanf("%d", &age);

    printf("\n====== Memory Analysis Report ======\n");
    // printf("Initial : %c\n", initial);
    printf("Initial (Char)  : [%c]\n", initial);
    printf("Initial (ASCII) : %d\n", initial);


    printf("Age : %d\n", age);

    /* The '&' symbol gets the memory address of the 'age' variable */
    printf("Memory Address of 'age' variable: %p\n", (void*)&age);

    return 0;
};