#include <stdio.h>

/* Function that receives a POINTER to an integer */
void update_stock (int *stock_ptr, int items_sold) {
    *stock_ptr = *stock_ptr - items_sold; // Accessing the real address
    printf(">> Logging: Stock updated in memory.\n");
}

int main (void) {
    int current_stock = 100;

    printf("====== Memory: Pass by Reference ======\n\n");
    printf("Initial Stock: %d\n", current_stock);

    /* We send the ADDRESS (&) to the function */
    update_stock(&current_stock, 15);

    printf("Final stock : %d (Succesfully changed!) \n", current_stock);


    return 0;
}