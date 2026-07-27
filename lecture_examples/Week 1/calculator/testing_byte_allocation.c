#include <stdio.h>
int main(void) {
    // int reais = 1;                  // stores 32 bits and the first is for signal, ~-2b to ~2b (%i or %d)
    // unsigned int reais = 1;         // stores 32 bits without bit for signal, 0 to ~4b (%u)
    // long reais = 1;                 // stores 64 bits and the first is for signal (only in linux), ~-9b to ~9b (%li)
    // unsigned long reais = 1;        // stores 64 bits without bit for signal (only in linux), 0 to ~18b (%lu)
    // long long reais = 1;            // stores 64 bits and the first is for signal (in all plataforms), ~-9b to ~9b (%lli)
    unsigned long long reais = 1;      // stores 64 bits without bit for signal (in all OS's), 0 to ~18b (%llu)
    char cmd;
    while (true) {
    printf("You want R$%llu or double it and pass to the next person? (y/n) ", reais);
    scanf(" %c", &cmd);
    if (cmd == 'n') {
        reais *= 2;
    } 
    else if (cmd == 'y') {
        break;
    }
    }
}