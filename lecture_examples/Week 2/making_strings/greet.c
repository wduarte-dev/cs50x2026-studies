#include <stdio.h>

int main(int argc, char* argv[]) {
    // If at least program name (./greet) + one parameter (2 parameters)
    if (argc == 2) { // argc (int) counts the amount of parameters provided by user
        printf("Hello, %s!\n", argv[1]); // argv[0] returns program name, argv[1] returns the inserted parameter after ./greet 
    }
    else {
        printf("Hello, word!\n");
    }
    return 0;
}