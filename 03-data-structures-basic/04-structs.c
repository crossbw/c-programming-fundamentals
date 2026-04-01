#include <stdio.h>
#include <string.h>

/* Defining a custom Data Type for an Invoice */
struct Invoice {
    int id;
    char customer_name[30];
    float total_amount;
    int item_count;
};

int main () {
    struct Invoice inv1;

    printf("====== Data Structures: Structs (Objects) ======\n\n");
    
    /* Assigning values */
    inv1.id = 202601;
    strcpy(inv1.customer_name, "Crossbw Tech"); //Special way to copy strings
    inv1.total_amount = 1500.50;
    inv1.item_count = 5;

    /* Printing values */
    printf("Invoice ID   : %d\n", inv1.id);
    printf("Customer     : %s\n", inv1.customer_name);
    printf("Total Amount : $%.2f\n", inv1.total_amount);
    printf("Item Count   : %d\n", inv1.item_count);

    return 0;
}