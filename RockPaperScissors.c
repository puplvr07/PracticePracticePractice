#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computer();
int user();
void win(int user, int computer);

int main(){
srand(time(NULL));

printf("This is a simple rock paper scissors program. \n");

int u = user();
int c = computer();

switch(u){
    case 1:
    printf("You: Rock! \n");
    break;
    
    case 2:
    printf("You: Paper! \n");
    break;

    case 3:
    printf("You: Scissors! \n");
    break;
}

switch(c){
    case 1:
    printf("Opponent: Rock! \n");
    break;
    
    case 2:
    printf("Opponent: Paper! \n");
    break;

    case 3:
    printf("Opponent: Scissors! \n");
    break;
}

win(u, c);

return 0;
}

int computer(){
    return (rand() % 3) + 1; //1-3

}
int user(){
    int choice = 0;

    while(choice < 1 || choice > 3){
        printf("Rock (1), Paper (2), or Scissors (3)? \n");
        scanf("%d", &choice);
    }

}

void win(int user, int computer){
    if(user == computer){
        printf("Tie... \n");
    }
    else if(user == 1 && computer == 3){
        printf("You win! \n");
    }
    else if(user == 2 && computer == 1){
        printf("You win! \n");
    }
    else if(user == 3 && computer == 2){
        printf("You win! \n");
    }
    else if(user == 1 && computer == 2){
        printf("You lose... \n");
    }
    else if(user == 2 && computer == 3){
        printf("You lose... \n");
    }
    else if(user == 3 && computer == 1){
        printf("You lose... \n");
    }
    else{
        printf("THERES AN ERROR!!! :c \n");
    }

    
}