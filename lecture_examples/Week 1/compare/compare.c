// Value for x and y, verify: ==, !=, >, <
#include <stdio.h>

int main(void) {
    float x, y;
    printf("Value for x: ");
    scanf("%f", &x);
    printf("Value for y: ");
    scanf("%f", &y);
    printf("\nx is equal to y? %d\n", x==y);
    printf("x is not equal to y? %d\n", x!=y);
    printf("x is greater than y? %d\n", x>y);
    printf("x is less than y? %d\n", x<y);
    return 0;
}