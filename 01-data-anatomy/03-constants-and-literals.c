#include <stdio.h>

/* Using #define for Global Constants (Pre-processor)*/
#define PI 3.14159
#define MAX_USERS 100

int main () {
    /* Using 'const' keyword for Local Constants*/
    const float GRAVITY = 9.18;
    
    int current_user = 50;

    printf("====== Data Anatomy: Constants ======\n\n");
    printf("Global Constants PI     : %.5f\n", PI);
    printf("Local Constants Gravity : %.1f\n", GRAVITY);
    printf("Current Users           : %d / %d\n", current_user, MAX_USERS);
    
    /* Experiment : Try to uncomment the line below and compile it */
    // GRAVITY = 10.0; //This will trigger a Compiler error

    return 0;
};