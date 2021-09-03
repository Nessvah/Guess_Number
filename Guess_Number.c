#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //Time variable
    time_t t; 

    //Initialize random number
    srand ((unsigned) time (&t));

    //Get random number and store it in a variable
    int randomNumber = rand() % 21;

    //Intro
    printf("This is a guessing game.\nI have chosen a number between 0 to 20 which you must guess.\n");

    //Store user input
    int numberGuessed; 

    for (int tries = 5; tries > 0; tries--)
    {
        printf("You have %d tr%s left.\n Enter a guess:\n", tries, tries == 1 ? "y" : "ies");
        scanf("%i", &numberGuessed);

            if (numberGuessed < 0 || numberGuessed > 20)
            {
                printf("You need to choose a number between 0 and 20.\n");
            }
            else if (numberGuessed > randomNumber)
            {
                printf("Sorry. %d is wrong. My number is less than that\n", numberGuessed);
            }
            else if (numberGuessed < randomNumber)
            {
                printf("Sorry. %d is wrong. My number is higher than that.\n", numberGuessed);
            }
            else
            {
                printf("Congratulations! You guessed correctly!\n");
                return 0;
            }  
    }
    printf("You had 5 tries and failed. The number was %d.\n", randomNumber);
    return 0;
}