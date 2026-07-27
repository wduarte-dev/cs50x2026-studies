#include <stdio.h>
int main(void) {
    int i;
    while (true) {
    printf("How many times? ");
    scanf("%d", &i);
    if (i < 0) {
        continue;
    }
    break;
    }
    for (int ii = 0; ii < i; ii++) {
        printf("This will repeat %d times.\n", i);
    }
    return 0;
}