/* main.c - The Orchestrator */
#include <stdio.h>
#include "invoice.h"
#include "utils.h"

int main () {
    int price = 5000;
    int qty = 3;
    float discount = 0.15;

    print_banner();

    int total_amount = calculate_total(price, qty);
    float discount_price = total_discount(total_amount, discount);
    float discount_total = calculate_discount(total_amount, discount_price);
    
    
    printf("Total Amount: $%d\n", total_amount);
    printf("Discount (%.0f%): $%.0f\n", discount * 100, discount_total);
    printf("Total Amount After Discount: $%.0f\n", discount_price);


    return 0;
}