#include <stdio.h>

int main(void) {
    float x, y;
    printf("Type a number for x: ");
    scanf("%f", &x);
    printf("Type a number for y: ");
    scanf("%f", &y);
    if (x > y) {
        printf("x is greater than y\n");
    }
    else if (x < y) {
        printf("y is greaten than x\n");
    }
    else {
        printf("x is equal to y\n");
    }
}