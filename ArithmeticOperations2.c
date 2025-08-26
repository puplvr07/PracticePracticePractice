#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>
#include <math.h>

int main(){
    double input1;
    double input2;
    double a, b, c;
    char choice[100];
    bool Continue = false;

    printf("Continue? Y/N \n");
    fflush(stdout);
    scanf("%99s", choice);
    if(strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0)
    {
        Continue = true;
    }
    while(Continue){
        printf("Enter two sides of a right triangle, and I'll find the third!\n");
        fflush(stdout);
        scanf("%lf %lf", &input1, &input2);
        a = input1;
        b = input2;
        c = sqrt((a*a)+(b*b));
        printf("The third side is: %7.2lf\n", c);
        printf("Continue? Y/N\n");
        fflush(stdout);
        scanf("%99s", choice);
        if(strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0)
        {
            Continue = true;
        }
        else
        {
            Continue = false;
            printf("Goodbye!\n");
            fflush(stdout);
        }
    }
    return 0;
}