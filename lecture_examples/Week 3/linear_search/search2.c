// Creation date (D/M/Y): 03/08/2026
#include <stdio.h>
#include <string.h>

int main(void) {
    char* keywords[] = {"fish", "book", "car", "available", "me"};
    char input[10];
    printf("Search: ");
    scanf("%9s", input);
    for (int i = 0; i < 5; i++) {
        printf("Your input: %s\nActual search: %s\n\n", input, keywords[i]);
        // if (input == keywords[i]) { // == expects a number, strings itself are not. So the comparation are always false.
        if (strcmp(input, keywords[i]) == 0) { // strcmp returns 0 if equal, positive or negative number if not.
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}