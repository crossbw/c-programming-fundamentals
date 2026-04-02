#include <stdio.h>

int main(void) {
    /* Method 1: Pre-defined string */
    char name[] = "Fedora-Linux";

    /* Method 2: Array with fixed size (leaving space for input)*/
    char username[20];

    printf("====== Data Structures: Strings (Char Arrays) ======\n\n");
    printf("System Name: %s\n", name);
    
    printf("Enter your username (max 19 chars): ");
    /* %s is used for strings. No '&' needed for char arrays! */
    scanf("%s", username);

    printf("Welcome back, %s!\n", username);

    return 0;
}