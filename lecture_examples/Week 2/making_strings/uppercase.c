#include <stdio.h>

char* upper(char array[]);

int main(void) {
    char string[100];
    printf("Lower to uppercase (up to 99 characters): ");
    fgets(string, 100, stdin);
    char* upper_string = upper(string);
    printf("%.99s\n", upper_string);
    return 0;
}

char* upper(char array[]) {
    for (int i = 0; array[i] != '\0'; i++) {
        if (array[i] >= 'a' && array[i] <= 'z') {
        array[i] -= 32;
        }
    }
    return array;
}