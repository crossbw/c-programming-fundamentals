#include <stdio.h>

int main () {
    int menu = 0;
    printf("====== Logic Control: Do-While Menu ======\n\n");
    
    do {
        printf("=== System Menu ===\n");
        printf("1. Status Check\n");
        printf("0. Exit System\n");
        printf("Select: ");
        scanf("%d", &menu);

        if(1 == menu) {
            printf(">> System is Optimal.\n\n");
        }

    } while (menu != 0); // Condition is checked AFTER the first run

    printf("System Shutdown. Progress saved.\n");

    return 0;
}