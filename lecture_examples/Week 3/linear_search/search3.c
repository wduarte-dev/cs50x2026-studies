// Creation date (D/M/Y): 03/08/2026
#include <stdio.h>
#include <string.h>

int main(void) {
    char* people[] = {"Jose", "Maria", "Carlos", "Albert"};
    int ages[] = {18, 19, 22, 64};
    char input[7];
    printf("Name: ");
    scanf("%6s", input);
    for (int i = 0; i < 4; i++) {
        if (strcmp(input, people[i]) == 0) {
            printf("%d\n", ages[i]);
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
}