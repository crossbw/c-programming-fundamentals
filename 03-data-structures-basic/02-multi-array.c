#include <stdio.h>

int main (void) {
    /* A table with 3 rows and 2 columns [Rows][Cols]*/
    /* Let's say: [Customer ID][Customer Age] */
    int customers[4][2] = {
        {101, 25}, // Row 0
        {102, 30}, // Row 1
        {103, 22}, // Row 2
        {104, 34}  // Row 3 
    };

    printf("====== Data Structures: 2D Arrays (Tables) ======\n\n");

    /* Accessing specific data */
    printf("Customer 0 - ID: %d, Age: %d\n", customers[0][0], customers[0][1]);
    printf("Customer 2 - ID: %d, Age: %d\n", customers[2][0], customers[2][1]);

    printf("\n=== Scanning the entire Table ===\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d]", customers[i][j]);
        }    
        printf("\n"); // Newline for each row
    }

    return 0;
}