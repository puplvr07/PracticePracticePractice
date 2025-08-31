#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// this code is being weird idk why

int main(){
srand(time(NULL)); //random # gen
char con[50];

printf("This is a program that rolls a dice! \n");
printf("2 win u need 2 roll a 6 :p \n");

while(1){ //loop so it doesnt finish so quick
printf("Start? \n");
fgets(con, sizeof(con), stdin); // i forgot this existed i should probably start using it more
con[strcspn(con, "\n")] = 0;  // remove newline


 if(strcmp(con, "Yes") == 0 || strcmp(con, "YES") == 0 || strcmp(con, "yes") == 0 || strcmp(con, "Y") == 0 || strcmp(con, "y") == 0)
    {
    for (;;) // infinite loop until 6
    {
    printf("Continue? (You have no choice.) \n");
    fgets(con, sizeof(con), stdin); // wait for user to press Enter because it looks weird if not

    int roll = rand() % 6 + 1;
    printf("You rolled a %d! \n", roll);

    if (roll == 6)
    {
        printf("You win! \n\n");
        break; 
    }
    else
    {
        printf("Try again. \n\n");
    }
    }


    }
else if (strcmp(con, "No") == 0 || strcmp(con, "NO") == 0 || strcmp(con, "no") == 0 || strcmp(con, "N") == 0 || strcmp(con, "n") == 0)
    {
    printf("Oh, okay!");
    break;
    }

else
    {
printf("Invalid input! \n");
    }
}
return 0;
}