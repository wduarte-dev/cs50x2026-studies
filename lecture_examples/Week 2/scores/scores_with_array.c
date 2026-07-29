// The same of the scores.c but using arrays instead and user interface
#include <stdio.h>

int main(void) {
    int number_of_scores;
    printf("How many scores? ");
    scanf("%d", &number_of_scores);
    int scores[number_of_scores], sum;
    for (int i = 0; i < number_of_scores; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    printf("Your average is %.2f\n", (float) sum / number_of_scores);
}
