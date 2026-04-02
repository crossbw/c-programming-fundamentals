#include <stdio.h>

int main (void) {
    int age = 23;
    /* A pointer variable that stores the ADDRESS of an integer */
    int *ptr = &age;
    int *ptrb = &age;

    printf("====== Pointer: Memory Navigation ======\n\n");
    printf("Value of 'age'          : %d\n", age);
    printf("Memory Address of 'age' : %p\n", &age);
    printf("Value stored in 'ptr'   : %p (This should be the same!)\n", ptr);
    printf("Value stored in 'ptrb'  : %p\n", ptrb);

    /* DE-REFERENCING: Accessing the value THROUGH the pointer */
    printf("\nValue accessed via 'ptr' : %d\n", *ptr);
    printf("Value accessed via 'ptrb': %d\n", *ptrb);

    /* Changing value via pointer */
    *ptr = 25;

    printf("\nNew value of 'age' after changing via pointer: %d\n", age);
    
    printf("\nThe value of 'ptrb': %d\n", *ptrb);
    printf("Memory address 'ptr'  : %p\n", ptr);
    printf("Memory address 'ptrb' : %p\n", ptrb);

    return 0;
}