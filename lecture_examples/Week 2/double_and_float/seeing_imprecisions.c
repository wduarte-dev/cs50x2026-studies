#include <stdio.h>

int main(void) {
    printf("%d\n", 3.0 == (float) 3); /* 3.0 is a double by default (C converts the numbers in the most precision type before operations)
                                                but 3 is float. (float) 3 is 3.0. 3.0 == 3.0 returns 1 (True) */ 
    printf("%d\n", (178 / 3.0) == (178 / (float) 3)); /*178 (int) / 3.0 (double), C converts 178 to double, that have double more precision
                                                                than float (64 vs 32 bits). The result are precision too.
                                                                But (int) 178 / float (3) makes C convert 178 to float. The result is less precise
                                                                than the previous. This results in 0 (False) due to floating point imprecision*/
    printf("%f\n", 178 / 3.0);
    printf("%f\n", 178 / (float) 3);
    return 0;
}
