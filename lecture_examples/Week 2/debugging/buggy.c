// File for debug purposes
#include <stdio.h>

void print_column(int height);

int main(void) {
    int height;
    printf("Height: ");
    scanf("%d", &height);
    print_column(height);
    return 0;
}

void print_column(int height) {
    for (int i = 0; i < height; i++) {
        printf("#\n");
    }
}