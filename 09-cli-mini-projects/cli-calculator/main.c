#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "calculator.h"

int main(void) {
    double num1, num2;
    char op;
    char choice;

    do {
        print_banner();

        while(1) {
            printf("The first number: ");

            if(get_double(&num1)) {
                break;
            }

            printf("[ERROR] Invalid number!\n");

        }

        while(1) {
            printf("The second number: ");
            
            if(get_double(&num2)) {
                break;
            }

            printf("[ERROR] Invalid number!\n");
        }

        while(1) {
            printf("Choose operator (+ - * /): ");
            
            if(get_operator(&op)) {
                break;
            }
            
            printf("[ERROR] Invalid operator input!\n");
        }


        int valid = 1;
        double result;

        switch (op)
        {
        case '+':
            result = add(num1, num2);
            break;

        case '-':
            result = subtract(num1, num2);
            break;

        case '*':
            result = multiply(num1, num2);
            break;

        case '/':
            if(num2 == 0) {
                printf("[ERROR] Division by zero!\n");
                printf("Result: Undefined\n");
                valid = 0;
            } 
            
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator!\n");
            valid = 0;
        }

        if (valid) {
            printf("Result: %.2f\n", result);
        }

        printf("Continue? (y/N): ");
        
        choice = getchar();
        while(getchar() != '\n'); // clear buffer

    } while (choice == 'y' || choice == 'Y');

    return 0;
}