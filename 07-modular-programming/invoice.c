/* invoice.c - The Implementation */
#include <stdio.h>
#include "invoice.h" // Referring to the blueprint

int calculate_total(int price, int qty) {
    return price * qty;
}

int total_discount(int total_amount, float discount) {
    return total_amount - (total_amount * discount);
}

int calculate_discount(int total_amount, float discount_price) {
    return total_amount - discount_price;
}