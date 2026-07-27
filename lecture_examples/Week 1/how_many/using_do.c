#include <stdio.h>

int get_integer(void);

int main(void) {
    int i = 0, ii;
    ii = get_integer();
    for (i; i < ii; i++) {
    printf("This will repeat %d times.\n", ii);
    }
    return 0;
}

int get_integer(void) {
    int n;
    do {                            // do this
        printf("How many times? ");
        scanf("%d", &n);
    } while (n < 0);               // until ...(condition)
    return n;
}