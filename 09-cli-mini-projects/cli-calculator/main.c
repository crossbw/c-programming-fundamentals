#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "calculator.h"
#include "history.h"

// 1. Definisikan tipe data untuk fungsi kalkulasi
typedef double (*calc_func)(double, double);

// 2. Buat struct untuk memetakan simbol ke fungsinya
typedef struct {
    char symbol;
    calc_func execute;
} Operation;

// 3. Tambahkan struct untuk fitur History
typedef struct {
    double n1, n2, result;
    char op;
} CalcHistory;


int main(void) {
    double n1, n2;
    char op;
    char choice;
    int allow_save = 0;
    char consent;

    // 1. Minta Persetujuan (User Consent)
    printf("Enable persistent history saving? (y/N): \n");
    consent = getchar();
    while(getchar() != '\n');
    if (consent == 'y' || consent == 'Y') allow_save = 1;


    // Alokasi awal untuk History (Heap Memory)
    // Inisialisasi History (Kapasitas awal 5)
    HistoryManager *history = init_history(5);

    // Tabel Operasi (Dispatch Table)
    Operation ops[] = {
        {'+', add},
        {'-', subtract},
        {'*', multiply},
        {'/', divide}
    };

    int num_ops = sizeof(ops) / sizeof(ops[0]);

    if(allow_save) load_history_from_file(history, "history.dat");

    do {
        print_banner();

        while(1) {
            printf("The first number: ");
            if(get_double(&n1)) break; 
            printf("[ERROR] Invalid number!\n");

        }

        while(1) {
            printf("The second number: ");
            if(get_double(&n2)) break;
            printf("[ERROR] Invalid number!\n");
        }

        while(1) {
            printf("Choose operator (+ - * /): ");
            if(get_operator(&op)) break;
            printf("[ERROR] Invalid operator input!\n");
        }

        // Logic Eksekusi menggunakan Function Pointers
        int found = 0;
        double res = 0;

        for (int i = 0; i < num_ops; i++) {
            if(ops[i].symbol == op) {
                if(op == '/' && n2 == 0) {
                    printf("[ERROR] Division by zero!\nResult: undefined\n");
                } else {
                    res = ops[i].execute(n1, n2);
                    printf("Result: %.2f\n", res);

                    add_history(history, n1, n2, op, res);
                }
                found = 1;
                break;
            }
        }

        if(!found) printf("[ERROR] Invalid operator!\n");

        printf("\nContinue? y/N or press 'h' for history: ");
        choice = getchar();
        while(getchar() != '\n'); //clear buffer

        if(choice == 'h' || choice == 'H') {
            print_history(history);

            printf("\n[Options] (c)lear all, (d)elete one, or (any) to continue: ");
            char h_choice = getchar();
            while(getchar() != '\n');

            if(h_choice == 'c') {
                clear_history(history);
                printf("History cleared!\n");
            } else if(h_choice == 'd') {
                int idx;
                printf("Enter index to delete: ");
                scanf("%d", &idx);
                while(getchar() != '\n');
                delete_history_at(history, idx - 1);
            }
        }

    } while(choice == 'y' || choice == 'Y');

    if(allow_save) {
        save_history_to_file(history, "history.dat");
    } else {
        remove("history.dat");
    }

    // WAJIB: Bebaskan memori sebelum keluar
    free_history(history);

    return 0;
}