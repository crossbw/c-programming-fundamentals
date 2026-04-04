#include <stdio.h>
#include <stdlib.h>
#include "history.h"

// Memulai atau memesan memori di awal
HistoryManager* init_history(int initial_capacity) {
    HistoryManager *hm = malloc(sizeof(HistoryManager));
    if(hm == NULL) return NULL; // Keamanan jika RAM penuh

    hm->records = malloc(sizeof(CalcRecord) * initial_capacity);
    hm->count = 0;
    hm->capacity = initial_capacity;
    return hm;
}

// Menambah data, dan memperbesar memori jika penuh
void add_history(HistoryManager *hm, double n1, double n2, char op, double result) {
    if(hm->count == hm->capacity) {
        hm->capacity *= 2; // Gandakan kapasitas
        hm->records = realloc(hm->records, sizeof(CalcRecord) * hm->capacity);
    }

    // Masukkan data baru
    hm->records[hm->count].n1 = n1;
    hm->records[hm->count].n2 = n2;
    hm->records[hm->count].op = op;
    hm->records[hm->count].result = result;
    hm->count++;
}

// Fungsi untuk menyimpan ke SSD
void save_history_to_file(HistoryManager *hm, const char *filename) {
    FILE *file = fopen(filename, "wb");
    if(file == NULL) {
        printf("[ERROR] Cannot create save file!\n");
        return;
    }

    // 1. Tulis dulu ada berapa jumlah datanya
    fwrite(&(hm->count), sizeof(int), 1, file);

    // 2. Tulis SELURUH array datanya sekaligus ke SSD!
    fwrite(hm->records, sizeof(CalcRecord), hm->count, file);

    fclose(file);
}

// Menampilkan semua riwayat
void print_history(const HistoryManager *hm) {
    printf("\n=== Calculation History ===\n");
    if(hm->count == 0) {
        printf("No history available.\n");
    } else {
        for(int i = 0; i < hm->count; i++) {
            printf("%d. %.2f %c %.2f = %.2f\n", 
                i + 1, hm->records[i].n1, hm->records[i].op, hm->records[i].n2, hm->records[i].result
            );
        }
    }

    printf("==============================\n");
}

void load_history_from_file(HistoryManager *hm, const char *filename) {
    FILE *file = fopen(filename, "rb");

    if(file == NULL) return;

    int saved_count;
    // 1. Baca jumlah datanya dulu
    if (fread(&saved_count, sizeof(int), 1, file) != 1) {
        fclose(file);
        return; // File kosong/rusak
    };

    // 2. Pastikan kapasitas RAM (malloc) kita cukup untuk menampung data dari SSD
    while(hm->capacity < saved_count) {
        hm->capacity *= 2;
    }

    hm->records = realloc(hm->records, sizeof(CalcRecord) * hm->capacity);

    // 3. Tarik semua datanya dari SSD langsung ke array RAM!
    fread(hm->records, sizeof(CalcRecord), saved_count, file);
    hm->count = saved_count; // Update jumlah data saat ini

    fclose(file);
}   

// Menghapus SEMUA riwayat (Clear)
void clear_history(HistoryManager *hm) {
    hm->count = 0;
    // Kita tidak perlu free memorinya sekarang, cukup reset count ke 0 
    // agar data lama dianggap tidak ada (di-overwrite nantinya).
}

// Menghapus SATU riwayat berdasarkan indeks (Delete)
void delete_history_at(HistoryManager *hm, int index) {
    if(hm->count == 0) {
        printf("[ERROR] History is empty!\n");
        return;
    }

    if (index < 0 || index >= hm->count) {
        printf("[ERROR] Invalid index! Range is 1 to %d index\n", hm->count);
        return;
    }

    // Menggeser data setelah indeks yang dihapus ke arah depan
    for(int i = index; i < hm->count - 1; i++) {
        hm->records[i] = hm->records[i + 1];
    }

    hm->count--;
    printf("Record at index %d deleted successfully\n", index + 1);
}

// Wajib dipanggil sebelum program selesai agar tidak bocor
void free_history(HistoryManager *hm) {
    if (hm != NULL) {
        free(hm->records); // Bebaskan array datanya dulu
        free(hm);          // Baru bebaskan struct managernya
    }
}