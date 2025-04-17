#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Author : WarriorBro 
Projetc name : Guess the number game 
Project language : C language
Project Level : beginner
Purpose : To help beginners to develope c language project.
Description : The game that generate a secret number between the 1 to 100 and say user to find that number, this game shows how many attempts user takes to find the number.
*/

int main(){
    // seed the random number generator with current time
    srand(time(0));

    // initilize the variable
    int secretNumber, userInput;

    // Generate a random number between 1 and 1000
    secretNumber = (rand() % 100) + 1;

    //printf("%d", secretNumber);   //  This line is added for only checking purpose was this secret number is generating.
    
    do
    {
        printf("\nEnter the number between 1 to 1000: ");
        scanf("%d", &userInput);

        if (userInput == secretNumber)
        {
            printf("\nCongrates!!! You guess the secret number and number is %d, you give your best in this game\n", secretNumber);
            break;
        }
        else if (userInput < secretNumber || userInput > secretNumber)
        {
            if (userInput < secretNumber)
            {
                printf("The number is lower than secret number, Enter big number than this.\n");
            }
            else
            {
                printf("The number is bigger than secret number, Enter small number than this.\n");
            }
        }
        else
        {
            printf("The number is invalid please enter number between 1 to 100\n");
            continue;
        }
        
        

    } while (secretNumber != userInput);
    
    
    

    return 0;
}