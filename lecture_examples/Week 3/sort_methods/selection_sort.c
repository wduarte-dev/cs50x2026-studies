// Creation date (D/M/Y): 04/08/2026
#include <stdio.h> 

int main(void) {
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1}, ii, j = 0;
    const int array_len = 9;
    while (j < array_len) {
        int smaller = array[j], aux_num = 0;
        ii = j;
        for (int i = 0 + j; i < array_len; i++) {
            if (array[i] < smaller) {
                smaller = array[i];
                ii = i;
            }
        }
        aux_num = array[j];
        array[j] = smaller;
        array[ii] = aux_num;
        j++;
    }
    for (int i = 0; i < array_len; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
