/* The Challenge: The Card Masker (C)
Imagine you want to create a simple program to mask credit card numbers by replacing almost all digits with '*', except for the last four.
Your goal is to write a snippet of C code that takes a string of numbers and performs this transformation.
Example:
    Input: "4012888888881881" (Length: 16 characters)
    Expected output: "************1881" 
*/
#include <stdio.h>
int arraylen(char array[]); // function prototipe

int main(void) {
    char number[20]; // 19 is the maximum quantity of numbers in a credit card by research, the 20th byte is for null terminator
    int array_lenght = 0;
    scanf("%19s", number); // Don't need the "&" because an array already points to an adress in memory
    array_lenght = arraylen(number);
    for (int j = 0; j < array_lenght - 4; j++) {
        number[j] = '*';
    }
    printf("%s\n", number);
    return 0;
}

int arraylen(char array[]) {
    int array_lenght = 0;
    for (int i = 0 ;; i++) {
        if (array[i] == '\0') {
            break;
        }
        array_lenght += 1;
    }
    return array_lenght;
}