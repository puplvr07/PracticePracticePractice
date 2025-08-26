#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>

int main(){
    float labubu = 2.11;
    double phonk = 6.666667777;
    char money = '$';
    char balance[] = "Sixty seven million dollars";
    char choice[100];
    bool GoSign;
    printf("Hello World! \n");
    printf("Programmed to work and not to feel~ \n");
    Sleep(1000);
    printf("Not even sure if this is real\n");
    printf("Make a choice. Go?\n");
    fflush(stdout);
    scanf("%99s", choice);
    if(strcmp(choice, "Go") == 0)
    {
        GoSign = true;
    }
    if(GoSign)
    {
        printf("Labubu prices are up by: %7.2f\n", labubu);
        printf("How many times did you listen to phonk music? %7.9lf times\n", phonk);
        printf("Account currency: %7c\n", money);
        printf("Account balance: %7s\n", balance);
    }
    else
    {
        printf("This is not real...\n");
    }
    return 0;
}