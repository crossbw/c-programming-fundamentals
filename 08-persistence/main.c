#include <stdio.h>
#include <stdlib.h>
#include "invoice.h"
#include "utils.h"

int main () {
    int n;
    print_banner();

    printf("How many items to input? ");
    scanf("%d", &n);

    // Dynamic memory allocation for N items
    Item *my_items = (Item*)malloc(n * sizeof(Item));

    for (int i = 0; i < n; i++) {
        printf("\nItem #%d name : ", i + 1);
        scanf("%s", my_items[i].name);
        
        printf("Item #%d price : ", i+1);
        scanf("%d", &my_items[i].price);
        
        printf("Item #%d quantity : ", i+1);
        scanf("%d", &my_items[i].qty);
    }

    save_to_file(my_items, n);
    load_and_display();
    free(my_items); // Free memory

    return 0;
}