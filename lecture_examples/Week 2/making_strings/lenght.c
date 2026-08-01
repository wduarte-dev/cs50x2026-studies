#include <stdio.h>

int len(char array[]);

int main(void) {
    char name[50];
    printf("Name: ");
    scanf("%49s", name);
    printf("The name %.49s has a lenght of %d characters.\n", name, len(name));
    return 0;
}

int len(char array[]) {
    int lenght = 0;
    for (int i = 0; array[i] != '\0'; i++) {
        lenght += 1;
    }
    return lenght;
}