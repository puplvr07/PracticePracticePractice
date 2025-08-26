#include <stdio.h>

int main() {

    int day = 0;
    
    printf("This is a program to print the day of the week based on a number! \n");
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);

    switch(day){

        case 1:
        case 10: //these two cases will both print Monday
            printf("Monday\n");
            break;
        
        case 2:
            printf("Tuesday\n");
            break;

        case 3:
            printf("Wednesday\n");
            break;

        case 4:
            printf("Thursday\n");
            break;

        case 5:
            printf("Friday\n");
            break;

        case 6:
            printf("Saturday\n");
            break;

        case 7:
            printf("Sunday\n");
            break;

        default:
            printf("Invalid input! Please only input 1-7.\n");
            break;

    }
}