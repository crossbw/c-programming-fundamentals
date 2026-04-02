#include <stdio.h>

int main (void) {
    /* FILE pointer to manage communication with the disk */
    FILE *fptr = NULL;

    /* Opening a file for Writing (w) */
    fptr = fopen("invoice_data.txt", "w");

    if(NULL == fptr) {
        printf("ERROR: Could not create file\n");
        return 1;
    }

    printf("====== File I/O: Writing to Disk ======\n\n");

    /* fprint works exactly like printf, but to a file */
    fprintf(fptr, "Invoice ID: 2026-01\n");
    fprintf(fptr, "Customer: Crossbw Tech\n");
    fprintf(fptr, "Total: $1,500.50\n");
    fprintf(fptr, "Items: Flashdisk Sandisk 32GB, Mouse Wireless Logitech M185\n");

    /* Always close the file to save it to disk */
    fclose(fptr);

    printf("Data successfully saved to invoice_data.txt\n");

    return 0;
}