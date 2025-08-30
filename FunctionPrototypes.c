#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>


void action(char skill[], int hp){

     printf("\nYou casted %s!\n", skill);
     printf("It did %d damage!\n", hp);
}
int main(){
    srand(time(NULL)); 
    
    char proceed[50];
    char spell[50];
    int enemy = 100; // >:)

    start:
    printf("This is a program that plays with function prototypes :P \n");
    printf("Enter battle? \n");
    scanf("%s", proceed);

    if(strcmp(proceed, "Yes") == 0 || strcmp(proceed, "YES") == 0 || strcmp(proceed, "yes") == 0 || strcmp(proceed, "Y") == 0 || strcmp(proceed, "y") == 0)
    {
        while(enemy > 0){
        printf("What spell would you like to cast? \n");
        scanf("%s", spell);

        int dmg = rand() % 100;

        action(spell, dmg);
        enemy -= dmg;
        }

        printf("Your enemy has been defeated! :D \n");

    }
    else if (strcmp(proceed, "No") == 0 || strcmp(proceed, "NO") == 0 || strcmp(proceed, "no") == 0 || strcmp(proceed, "N") == 0 || strcmp(proceed, "n") == 0)
    {
        printf("Exiting");
        Sleep(500);
        printf(".");
        Sleep(800);
        printf(".");
        Sleep(1000);
        printf(".");
    }
    else
    {
        printf("Invalid input. Please try again! \n");
        goto start;
    }

    return 0;
}
