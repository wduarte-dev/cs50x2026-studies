// Creation date (D/M/Y): 03/08/2026
#include <stdio.h>
#include <string.h>

typedef struct {
    char* name;
    int age;
} person;

int main(void) {
    person people[4]; // Manually
    people[0].name = "Jose";
    people[0].age = 18;
    people[1].name = "Maria";
    people[1].age = 19;
    people[2].name = "Carlos";
    people[2].age = 22;
    people[3].name = "Albert";
    people[3].age = 64;
    char input[7];
    printf("Name: ");
    scanf("%6s", input);
    for (int i = 0; i < 4; i++) {
        if (strcmp(input, people[i].name) == 0) {
            printf("%d\n", people[i].age);
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;

    
    return 0;
}