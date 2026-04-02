#include <stdio.h>

int main (void) {
    /* Declaring an Array of 5 integers */
    int ages[5] = {21, 23, 19, 25, 30};

    printf("====== Data Structures: BAsic Arrays ======\n\n");
    
    /* IMPORTANT: Array index in C starts from 0, not 1! */
    printf("First Person's Age   : %d\n", ages[0]);
    printf("Second Person's Age  : %d\n", ages[1]);
    printf("Last Person's Age    : %d\n", ages[4]);
    printf("Index 5 Person's Age : %d\n", ages[5]);

    printf("\n=== Printing all ages using a Loop ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Person index [%d] age: %d\n", i, ages[i]);
    }

    return 0;
}