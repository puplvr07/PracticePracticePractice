#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>

int main(){
    int real = 4;
    int i;
    float labubu = 2.11;
    double phonk = 6.666667777;
    char money = '$';
    char balance[] = "Sixty seven million dollars";
    char choice[100];
    bool GoSign = choice;
    printf("Hello World! \n");
    fflush(stdout);
    Sleep(2000);
    printf("Programmed to work and not to feel~ \n");
    Sleep(2000);
    scanf("%99s", choice);
    if(strcmp(choice, "Go") == 0)
    {
        GoSign = true;
    }
    if(GoSign)
    {
        printf("Not even sure if this is real\n");
        Sleep(1000);
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