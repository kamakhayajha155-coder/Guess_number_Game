#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts, playAgain;

    do {
        /* Seed the random number generator using the current time,
           so we get a different random number each time we play. */
        srand(time(NULL));

        /* rand() * 100 gives a integer from 0-99 */
        number = rand() *100;
        attempts = 0;

        printf("\n===== NUMBER GUESSING GAME =====\n");
        printf("I'm thinking of a number between 1 and 100.\n");
        printf("Can you guess it?\n\n");

        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > number) {
                printf("Too large! Try again.\n");
            } else if (guess < number) {
                printf("Too small! Try again.\n");
            } else {
                printf("\nCongratulations!!!You guessed it right.The number was %d.\n", number);
                printf("You guessed it in %d attempt(s).\n", attempts);
            }
        } while (guess != number);

        printf("\nDo you want to play again? If yes then press accordingly (1 = Yes, 0 = No): ");
        scanf("%d", &playAgain);

    } while (playAgain == 1);

    printf("\nThanks for playing! Goodbye.\n");

    return 0;
}