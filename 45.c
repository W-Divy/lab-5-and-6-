#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lucky_number, guess;
    int attempts = 3;

    // Seed the random number generator
    srand(time(0));
    lucky_number = rand() % 10 + 1; // Lucky number between 1 and 10

    printf("Welcome to the Guessing Game!\n");
    printf("Guess the lucky number between 1 and 10.\n");

    for (int attempt = 1; attempt <= attempts; attempt++) {
        printf("Attempt %d: Enter your guess: ", attempt);
        scanf("%d", &guess);
        
        // Check if the guess is correct
        if (guess == lucky_number) {
            printf("Congratulations! You guessed the lucky number!\n");
            break;
        } else if (guess < lucky_number) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }

        // Conditional operator to give feedback
        printf("%s\n", (attempt == attempts) ? "Last chance!" : "Try again!");
    }

    // If the user didn't guess correctly
    if (guess != lucky_number) {
        printf("Sorry, the lucky number was %d. Better luck next time!\n", lucky_number);
    }

    return 0;
}
