#include <stdio.h>
#include <limits.h>

int main () {
    printf("====== Data Anatomy : Variable Limits ======\n\n");

    /* Using constants from limits.h to see the range of each type */
    printf("CHAR Range : From %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("INT Range  : From %d to %d\n", INT_MIN, INT_MAX);

    printf("\n=== Experiment : Overstepping the Limit ===\n");

    /* What happens if we add 1 to the maximum INT? */
    int max_plus_one = INT_MAX + 1;
    printf("Maximum INT     : %d\n", INT_MAX);
    printf("Maximum INT + 1 : %d (Overflow occured!)\n", max_plus_one);

    return 0;
};