#ifndef INVOICE_H
#define INVOICE_H

typedef struct {
    char name[30];
    int price;
    int qty;
} Item;


void save_to_file(Item *items, int count);
void load_and_display();
Item* load_from_file(int *count);

#endif