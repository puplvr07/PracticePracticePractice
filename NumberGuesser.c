#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>

int main(){
    printf("This is a program that haves you guess a number between 1 and 1000! You have 10 lives. \n");

    srand(time(NULL));
    int guess;
    int min = 1;
    int max = 1000;
    int lives = 10;
    int ans = (rand () % (max - min + 1)) + min;

    do{
        printf("Guess a number between %d-%d! \n", min, max);
        scanf("%d", &guess);

        lives--;
        printf("Lives left: %d\n", lives);

        if(lives!=0){
           if(guess > ans - 100 && guess < ans + 100){
            printf("Warm! \n");
           }
           else if (guess < ans - 100 || guess > ans + 100){
            printf("Cold... \n");
           }
        }
        else if(lives==0){
            printf("Sorry, you ran out of lives! :( \n");
            printf("The answer was %d. \n", ans);
            return 0;
        }
    }while(guess!=ans);

    printf("The answer was %d!\n", ans);
    printf("It took you %d tries.\n", 5 - lives);

    return 0;
}