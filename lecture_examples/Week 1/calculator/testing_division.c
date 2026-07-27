#include <stdio.h>

int main(void) {
    float x, y;
    printf("Type a number for x: ");
    scanf("%f", &x);
    printf("Type a number for y: ");
    scanf("%f", &y);
    printf("%.2f\n", x / y);
    return 0;
}