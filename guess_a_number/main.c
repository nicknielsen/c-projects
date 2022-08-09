#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Variable list:
    int player_guess = 0;
    int tries = 5;

    // Initialize a random number.
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;
    //TEST PRINT
    //printf("%d\n", randomNumber);

    // Greet the player and take their guess.
    printf("Howdy! I'm thinking of a number between 0 and 20.\n");
    printf("\nCan you guess the number I'm thinking of? Go ahead, guess!\n");
    printf("\nI'll give you five tries...\n");
    printf("\nTell me your first guess: ");
    scanf("%d", &player_guess);


    // Check the player's guess against the random number.
    while (tries > 0)
    {
        // If the player guesses a number outside the bounds of the game.
        if (player_guess > 20 || player_guess < 0)
        {
            printf("\nHey, that number isn't allowed! You gotta guess a number between 0 and 20.\n");
            printf("\nGuess again: ");
            scanf("%d", &player_guess);
        }

        // If the player guessed a lower number...
        else if (player_guess < randomNumber)
        {
            printf("\nSorry, but %d is lower than my number.\n", player_guess);
            --tries;

            // Check how many tries are left. If no tries are left, break out of the outer While loop.
            if (tries > 1)
            {
                printf("You have %d tries left.", tries);
                printf("\nGuess again: ");
                scanf("%d", &player_guess);
            }
            // This else if changes the "Guess again" message to be grammatically correct if there is only one try left.
            else if (tries == 1)
            {
                printf("You have %d try left.", tries);
                printf("\nGuess again: ");
                scanf("%d", &player_guess);
            }
            else
            {
                break;
            }

        }

        // If the player guessed a higher number...
        else if (player_guess > randomNumber)
        {
            printf("\nSorry, but %d is higher than my number.\n", player_guess);
            --tries;
            // Check how many tries are left. If no tries are left, break out of the outer While loop.
            if (tries > 1)
            {
                printf("You have %d tries left.", tries);
                printf("\nGuess again: ");
                scanf("%d", &player_guess);
            }
            else if (tries == 1)
            {
                printf("You have %d try left.", tries);
                printf("\nGuess again: ");
                scanf("%d", &player_guess);
            }
            else
            {
                break;
            }

        }
        else if (player_guess == randomNumber)
        {
            break;
        }
    } // End of outer While loop.

    // Depending on the outcome of the game, print a final message.
    if (tries == 0)
    {
        printf("\nAw, shucks... You're all out of tries. Looks like I win!");
        printf("\n--------------------------------------------------------\n");
    }
    else
    {
        printf("\nYou guessed my number! Congratulations... Now go play outside.");
        printf("\n--------------------------------------------------------------\n");
    }

    return 0;
}
