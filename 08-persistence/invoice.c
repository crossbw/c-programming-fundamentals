#include <stdio.h>
#include <stdlib.h>
#include "invoice.h"

void save_to_file(Item *items, int count) {
    FILE *fptr = fopen("database.dat", "wb"); // wb = write binary
    if(NULL == fptr) return;

    /* Write the item count first to indicate how many elements should be read during loading */
    fwrite(&count, sizeof(int), 1, fptr);

    /* Then write the entire array in a single operation */
    fwrite(items, sizeof(Item), count, fptr);

    fclose(fptr);
    printf(">> Data saved to database.dat\n");
}

void load_and_display() {
    FILE *fptr = fopen("database.dat", "rb"); // rb = read binary
    if(NULL == fptr) {
        printf("No database found!\n");
        return;
    }

    int count;
    // Read the item count first
    fread(&count, sizeof(int), 1, fptr);

    // Allocate memory on the heap using malloc
    Item *loaded_items = (Item*)malloc(count * sizeof(Item));

    // Load all items in a single operation
    fread(loaded_items, sizeof(Item), count, fptr);

    printf("\n=== Loading Data from Disk ===\n");
    for(int i = 0; i < count; i++) {
        printf("Item %d: %s | Price: $%d | Quantity: %d\n", i+1, loaded_items[i].name, loaded_items[i].price, loaded_items[i].qty);
    }

    free(loaded_items);
    fclose(fptr);
}