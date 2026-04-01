#include <stdio.h>

int main () {
    int access_code;
    const int SECRET_KEY = 1234;

    printf("====== Logic Control: Security Access  ======\n\n");
    printf("Enter Security Code: ");
    scanf("%d", &access_code);

    /* Logic: IF - ELSE (Decision Making) */
    if (access_code == SECRET_KEY) {
        printf("ACCESS GRANTED: Welcome Home!\n");
    } else {
        printf("ACCESS DENIED: Intruders detected!\n");
    }

    return 0;
}