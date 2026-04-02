#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int *ptr = NULL;
    int initial_size = 2;
    int new_size = 4;

    printf("====== Advanced Memory: Re-allocating ======\n\n");

    // 1. Allocate 2 slots first
    ptr = (int*)malloc(initial_size * sizeof(int));
    ptr[0] = 10; ptr[1] = 20;
    printf("Initial: %d, %d (at: %p)\n", ptr[0], ptr[1], ptr);

    // 2. Suddenly need 4 slots!
    ptr = (int*)realloc(ptr, new_size * sizeof(int));
    ptr[2] = 30; ptr[3] = 40;
    printf("Expanded: %d, %d, %d, %d (at: %p)\n", ptr[0], ptr[1], ptr[2], ptr[3], ptr);

    free(ptr);
    
    return 0;
}