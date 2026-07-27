#include <stdio.h>

// Prototipe
void counter(int times); // Indicates that the functions exists, but are defined after its use

int main(void) {
    int n;
    printf("How many times? ");
    scanf("%d", &n);
    counter(n);
}

void counter(int times) {
    for (int i = 0; i < times + 1; i++) {
        printf("%d ", i);
    }
    printf("\n");
}
