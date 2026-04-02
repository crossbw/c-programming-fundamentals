#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n;
    int *ptr;

    printf("====== Advanced Memory: Dynamic Allocation ======\n\n");
    printf("How many items do you want to store? ");
    scanf("%d", &n);

    /* MALLOC: Allocates memory of size (n * size of int) */
    ptr = (int*)malloc(n * sizeof(int));

    /* Check if memory allocation was successfull */
    if (NULL == ptr) {
        printf("Memory not allocated. System Full!\n");
        return 1;
    }

    /* Using the dynamic memory like an array */
    for (int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
        printf("Item %d: %d (Address: %p)\n", i, ptr[i], &ptr[i]);
    }

    /* CRITICAL: Always FREE the memory when done! */
    free(ptr);
    printf("\nMemory successfully freed. Warehouse closed.\n");


    return 0;
}