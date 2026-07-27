#include <stdio.h>

int main(void) {
    int i = 0, ii;
    do {                            // do this
        printf("How many times? ");
        scanf("%d", &ii);
    } while (ii < 0);               // until ...(condition)
    for (i; i < ii; i++) {
        printf("This will repeat %d times.\n", ii);
    }
    return 0;
}