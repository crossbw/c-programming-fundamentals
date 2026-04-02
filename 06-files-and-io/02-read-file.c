#include <stdio.h>

int main (void) {
    FILE *fptr = NULL;
    char buffer[100]; // Temporary buffer to store a line of text

    /* Opening for Reading (r) */
    fptr = fopen("invoice_data.txt", "r");

    if (NULL == fptr) {
        printf("ERROR: File is not found!\n");
        return 1;
    }

    printf("====== File I/O: Reading from Disk ======\n\n");

    /* fgets reads line by line until the end of file (EOF) */
    while(fgets(buffer, 100, fptr)) {
        printf("%s\n", buffer);
    }

    fclose(fptr);
    return 0;
}