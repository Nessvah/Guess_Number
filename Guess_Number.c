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

    
    
    printf("First commit \n");
    return 0;
}