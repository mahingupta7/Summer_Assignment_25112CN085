#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    secret = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");

    // Loop until the user guesses correctly
    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
            printf("Too high! Try a smaller number.");
        else if (guess < secret)
            printf("Too low! Try a bigger number.");
        else
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);

    } while (guess != secret);

    return 0;
}
