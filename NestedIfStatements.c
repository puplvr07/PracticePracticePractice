#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {

    float price = 10.0;
    bool Student = false; // 10% discount
    bool Senior = false;  // 20% discount
    int temp = 0;

    printf("This is a program to calculate ticket prices with discounts using nested if statements! \n");

    printf("Are you a student? (1 for yes, 0 for no): ");
    scanf("%d", &temp);
    Student = temp ? true : false;

    printf("Are you a senior? (1 for yes, 0 for no): ");
    scanf("%d", &temp);
    Senior = temp ? true : false;

    if(Student){
        if(Senior){
            printf("Student discount applied! (10%% off)\n");
            printf("Senior discount applied! (20%% off)\n");
            price = price * 0.7;
        }
        else{
            printf("Student discount applied! (10%% off)\n");
            price = price * 0.9;
        }
    }
    else {
        if(Senior){
            price = price * 0.8;
            printf("Senior discount applied! (20%% off)\n");
        }
    }

    printf("Your total is: $%.2f\n", price);

    return 0;

}
