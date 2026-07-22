#include <stdio.h>

int main(void) {
    char name[50]; // create a array of characters with a lenght of 50 (but the 50 is reserved for \0)
    printf("What's your name? ");
    scanf("%49s", name); // because of line 4, the scanf will only read the 49 first positions of the array, if you put %50s, the compiler will alloc 51 bytes, so this 1 extra byte will "invade" the other spaces of RAM
    printf("Your name is %s\n", name);
    printf("The size of the variable is %li bytes\n", sizeof(name));
    return 0;
}