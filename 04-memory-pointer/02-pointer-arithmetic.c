#include <stdio.h>

int main (void) {
    int numbers[3] = {10, 20, 30};
    int *ptr = numbers; // Pointer points to the first element [0]

    printf("====== Pointers: Arithmetic Navigation ======\n\n");

    printf("Index 0 via Pointer: %d (Address: %p)\n", *ptr, ptr);

    /* Move pointer to the next integer (+4 bytes in memory) */
    ptr++;
    printf("Index 1 via Pointer: %d (Address: %p)\n", *ptr, ptr);

    ptr++;
    printf("Index 2 via Pointer: %d (Address: %p)\n", *ptr, ptr);

    return 0;
}