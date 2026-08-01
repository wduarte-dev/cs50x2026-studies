/* Create an encryptor that deslocate the letters of a message by one and a decryptor that discover the message itself.
At the end, prints the user the message encrypted and the original using the functions.
Examples for encryptor:
ABCDEF -> BCDFEG
Hello! -> Ifmmp!
I'm learning C -> J'n mfbsojoh D

Examples for decryptor:
Cppl -> Book
Abdl -> Zack
Uijt nfttbhf dbo'u cf efdszqufe! -> This message can't be decrypted!

Warnings:
----- Do not encrypt numbers and symbols.
----- The encryptor and decryptor must be functions.
*/
#include <stdio.h>
#define and &&
#define or ||

char* encrypt(char* message);
char* decrypt(char* message);

int main(void) {
    printf("Message (maximum 99 characters): ");
    char message[100];
    fgets(message, 100, stdin);
    char* encrypted = encrypt(message);
    printf("Encrypted message: %s", encrypted);
    char* decrypted = decrypt(encrypted);
    printf("Decrypted message: %s\n", decrypted);
    return 0;
}

char* encrypt(char* message) {
    for (int i = 0; message[i] != '\0'; i++) {
        if ((message[i] >= 65 and message[i] <= 89) or (message[i] >= 97 and message[i] <= 121)) {
            message[i] += 1;
        }
        else if (message[i] == 90) {
            message[i] = 'A';
        }
        else if (message[i] == 122) {
            message[i] = 'a';
        }
    }
    return message;
}

char* decrypt(char* message) {
    char* copy_message = message;
    for (int i = 0; copy_message[i] != '\0'; i++) {
        if ((copy_message[i] >= 66 and copy_message[i] <= 90) or (copy_message[i] >= 98 and copy_message[i] <= 122)) {
            copy_message[i] -= 1;
        }
        else if (copy_message[i] == 65) {
            copy_message[i] = 'Z';
        }
        else if (copy_message[i] == 97) {
            copy_message[i] = 'z';
        }
    }
    return copy_message;
}