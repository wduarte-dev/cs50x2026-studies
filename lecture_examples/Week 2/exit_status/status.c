#include <stdio.h>

int main(int parameters, char* string[]) {
    if (parameters != 2) {
        printf("\033[31mMissing function parameter.\033[0m\n");
        return 1; // Use echo $? after the program execution to see exit status code
    }
    printf("Hello, %s!\n", string[1]);
    return 0;
    
}