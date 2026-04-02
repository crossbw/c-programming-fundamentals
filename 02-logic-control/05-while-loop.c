#include <stdio.h>

int main (void) {
    int input = 0;

    printf("====== Logic Control: System Loop ======\n\n");

    /* Loop will continue as long as input is NOT 99 */
    while (99 != input) {
        printf("System is RUNNING... (Enter 99 to stop): ");
        scanf("%d", &input);
    }

    // while (1)
    // {
    //     printf("\nTRUE!\n");
    // }
    

    printf("\nSystem HALTED. Loop finished.\n");

    return 0;
}