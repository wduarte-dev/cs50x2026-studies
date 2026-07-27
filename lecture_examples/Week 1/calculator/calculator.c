// Asks the user two numbers and sum, multiplication
#include <stdio.h>

int get_integer(char* string);

int main(void) {
    int x = get_integer("x");
    int y = get_integer("y");
    int sum = x + y;
    int mult = x * y;
    printf("The sum is %d\nThe multiplication is %d\n", sum, mult);
    return 0;
}

int get_integer(char* string) {
    int n;
    printf("Integer value for %s: ", string);
    scanf("%d", &n);
    return n;
}