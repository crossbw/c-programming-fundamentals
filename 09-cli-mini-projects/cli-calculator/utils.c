#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

void print_banner () {
    printf("================\n");
    printf("CLI - CALCULATOR\n");
    printf("================\n\n");
}

int get_double(double *value) {
    char buffer[100];
    char *endptr;

    if(fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 0;
    }

    *value = strtod(buffer, &endptr);
    /*
     Validation:
     1. Tidak boleh gagal parsing
     2. Tidak boleh ada karakter aneh selain newline
    */
    if(endptr == buffer || (*endptr != '\n' && *endptr != '\0')) return 0;

    return 1;
}

int get_operator(char *op) {
    char buffer[10];

    if(fgets(buffer, sizeof(buffer), stdin) == NULL) return 0;

    if(buffer[0] == '\n') return 0;
    
    *op = buffer[0];

    return 1;
}