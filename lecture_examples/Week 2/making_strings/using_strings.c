#include <stdio.h>
#define string char* // char* is a pointer.

int main(void) {
    string s = "Hello, world!"; // The char* points to 'H' memory adress
    printf("%s\n", s);  // %s prints characters based on memory adress of chair*, stopping in the null terminator
    return 0;
}

