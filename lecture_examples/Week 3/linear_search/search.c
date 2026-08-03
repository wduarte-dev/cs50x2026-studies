// Implementation of a linear search using integer array
#include <stdio.h>

int main(void) {
    int numbers[] = {100, 200, 30, 50, 60, 10, 1, 2};
    printf("What's the number? ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 8; i++) {
        if (numbers[i] == n) {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}