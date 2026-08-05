// Creation date (D/M/Y): 05/08/2026
#include <stdio.h>

int draw(int n);

int main(void) {
    int height = 5;
    draw(height);
    return 0;
}
// Simple recursion example (causes segmentation fault if n is too large)
int draw(int n) {
    if (n <= 0) 
        return 0;
    draw(n-1);
    for (int i = 0; i < n; i++) 
        printf("#");
    printf("\n");
}