/* invoice.h - The Header File */
#ifndef INVOICE_H
#define INVOICE_H

// Function prototype (Promise)
int calculate_total(int price,int qty);
int total_discount(int total_amount, float discount);
int calculate_discount(int total_amount, float discount_price);

#endif