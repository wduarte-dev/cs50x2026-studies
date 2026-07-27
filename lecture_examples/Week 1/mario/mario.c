#include <stdio.h>

int main(void) {
    const int n = 3;         // const indicates that this variable cant be changed, if did, compiler will dispair an error.
    // For each row
    for (int i = 0; i < n; i++) {
        // For each column
        for (int j = 0; j < n; j++) {
        printf("#");
        }
        printf("\n");
    }
}