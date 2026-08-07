// Creation date (D/M/Y): 07/08/2026
#include <stdio.h>

int main(void) {
    int n = 50; 
    int *p = &n; // int *p creates a integer pointer, &n provides the memory address of n.
    printf("The adress memory of n is %p\n", p);
    printf("If I want to see \"What's stored in that memory address?\" -> %i\n", *p);
    *p = 100; // I modify directly the value of the address.
    printf("What's stored in that memory address? -> %i\n", *p);
    return 0;
}