#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, tries = 0;

    srand(time(0));
    int x = rand() % 100 + 1;

    printf("*** NUMBER GUESSING GAME! ***\n");
    printf("-----------------------------\n");
    printf("\nGuess the Number\n(Hint: Between 1-100)\n");
    printf("\n---> ");

    while (1) {
        scanf("%d", &a);
        tries++;

        if (a < x) {
            printf("\nEnter a Larger Number!\n\n---> ");
        } else if (a > x) {
            printf("\nEnter a Smaller Number!\n\n---> ");
        } else {
            printf("\nCONGRATS!! You Guessed the Correct Number!\n");
            printf("No of Tries: %d\n", tries);
            break;
        }
    }

    return 0;
}

