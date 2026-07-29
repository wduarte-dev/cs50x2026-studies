// Make an average with three integer scores
// Tip: When an operation have at least one float number, all of the integers in that operations will be converted to float automatically.
#include <stdio.h>

int main(void) {
    int score1 = 73, score2 = 72, score3 = 33;
    printf("Your score is %f", (score1 + score2 + score3) / (float) 3);
    return 0;
}
