#include <stdio.h>

void balance(float x);
float deposit();
float withdraw(float x);

int main(){
    int choice = 0;
    float bal = 0.0;

    printf("Welcome to my ATM machine \n");

    do{
        printf("Select an option: \n 1. Check Balance \n 2. Deposit \n 3. Withdraw \n 4. Exit \n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                balance (bal);
                break;
            case 2:
                bal += deposit();
                break;
            case 3:
                bal -= withdraw(bal);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }while(choice != 4);

    return 0;
}

void balance(float x){
        printf("Your current balance is: %.2f Pesos \n", x);
    }

float deposit(){
    float dep = 0.0f;
    printf("Enter deposit amount: ");
    scanf("%f", &dep);

    if(dep<0){
        printf("Sanaol baliw. Invalid input. \n");
        return 0.0f;
    } else {
        printf("Successfully deposited: %.2f Pesos \n", dep);
        return dep;
    }
    return 0.0f;
}

float withdraw(float x){
    float wit = 0.0f;
    printf("Enter withdrawal amount: ");
    scanf("%f", &wit);
    if(wit < 0){
        printf("Sanaol baliw. Invalid input. \n");
        return 0.0f;
    } else if(wit > x){
        printf("Insufficient balance. \n");
        return 0.0f;
    } else {
        printf("Successfully withdrew: %.2f Pesos \n", wit);
        return wit;
    }
    return 0.0f;
}