// project 1 game:guess the number//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\n\n**************************\n");
    printf("Welcome to the game of guessing the number---made by SUBHADIP DAS\n");
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1; //this generates a random number between 1 and 100//
    //printf("the random number is %d\n",number);
    //keep running the loop until it is guessed//
    do{
        printf("\nGuess the number between 1and 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("LOWER number please!!!\n");
        }
        else if(guess<number){
            printf("HIGHER number please!!!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);

    printf("\nPress 'Run' / 'g and tab' to play again >>>\n");
    printf("\n----MADE BY SUBHADIP DAS----\n\n");
    return 0;
}