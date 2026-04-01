#include <stdio.h>

int main () {
    printf("====== Logic Control : Rocket Launch ======");

    /* For (start variable; condition; increment/decrement) */
    for(int i = 10; i > 0; i --) {
        printf("T-Minus %d...\n", i);
    }

    printf("\nLIFTOFF! 🚀\n");

    return 0;
}