#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int no_of_guess = 0;
    int guessed;
    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {

        printf("Guess the number : ");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower number please !\n");
        }
        else if (guessed < randomNumber)
        {
            printf(" Higher number PLease !\n");
        }
        else
        {
            printf("congrats ! \"YOU WON\" \n");
        }

        no_of_guess++;

    } while (guessed != randomNumber);
    printf("You guessed the number in %d guesses", no_of_guess);
    printf("Random number between 1 and 100: %d\n", randomNumber);
    return 0;
}