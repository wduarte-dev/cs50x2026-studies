#include <stdio.h>

int main(void) {
    char cmd;
    printf("Do you agree? (y/n) ");
    scanf("%c", &cmd);
    if (cmd == 'y' || cmd == 'Y') {
        printf("Agreed.\n");
    }
    else {
        printf("Don't agreed.\n");
    }
}