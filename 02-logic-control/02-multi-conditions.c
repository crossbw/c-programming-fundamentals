#include <stdio.h>

int main () {
    int score;

    printf("====== Logic Control: Grading System ======\n\n");
    printf("Enter Exam Score: ");
    scanf("%d", &score);

    /* Using logical AND(&&) to check a range */
    if (90 <= score && 100 >= score) {
        printf("Grade: A (Excellent!)\n");
    } else if (75 <= score && 90 > score) {
        printf("Grade: B (Good Job!)\n");
    } else if (0 <= score && 75 > score) {
        printf("Grade: C (Keep Learning!)\n");
    } else {
        /* This handles anomaly likes score 105, -5, etc */
        printf("ERROR: Invalid score entered!\n");
    }

    return 0;
}