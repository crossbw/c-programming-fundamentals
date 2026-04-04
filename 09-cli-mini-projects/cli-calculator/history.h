#ifndef HISTORY_H
#define HISTORY_H

typedef struct {
    double n1, n2, result;
    char op;
} CalcRecord;

typedef struct {
    CalcRecord *records; // Pointer ke Heap Memory
    int count;           // Jumlah data saat ini
    int capacity;        // Kapasitas maksimal saat ini
} HistoryManager;

HistoryManager* init_history(int initial_capacity);
void add_history(HistoryManager *hm, double n1, double n2, char op, double result);
void save_history_to_file(HistoryManager *hm, const char *filename);
void print_history(const HistoryManager *hm);
void load_history_from_file(HistoryManager *hm, const char *filename);
void clear_history(HistoryManager *hm);
void delete_history_at(HistoryManager *hm, int index);
void free_history(HistoryManager *hm);

#endif