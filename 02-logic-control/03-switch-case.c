#include <stdio.h>

int main (void) {
    int menu;

    printf("====== Logic Control : System Menu\n\n");
    printf("1. Check System Status\n");
    printf("2. Reboot System\n");
    printf("3. Shutdown\n");
    printf("Enter (1-3): ");
    scanf("%d", &menu);

    /* Switch is faster and cleaner for fixed integer values */
    switch (menu)
    {
    case 1:
        printf("Status: All systems operational on Linux Fedora.\n");
        break;
    case 2:
        printf("Action: Rebooting The System!\n");
        break;
    case 3:
        printf("Action: Shutting down, Goodbye!\n");
        break;

    default:
        printf("ERROR: Unknown command code [%d].\n");
        break;
    }


    return 0;
}