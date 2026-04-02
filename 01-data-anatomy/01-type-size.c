#include <stdio.h>

int main (void) {
    printf("====== Data Anatomy: Memory Size Analysis ======\n\n");

    /* Printing the actual size of each data type in Bytes*/
    printf("1. CHAR   : %zu byte (Memory slot for Initial)\n", sizeof(char));
    printf("2. INT    : %zu bytes (Memory slot for Age)\n", sizeof(int));
    printf("3. FLOAT  : %zu bytes (Standar Decimal)\n", sizeof(float));
    printf("4. DOUBLE : %zu bytes (High Precision Decimal\n)", sizeof(double));

    printf("\n====== Why did Initial become '0'? ======\n");
    printf("A CHAR occupies 1 slot, while an INT occupies 4 slots.\n");
    printf("If their memory adresses are adjacent, an INT might 'overflow' into the CHAR's space.\n");

    return 0;
};