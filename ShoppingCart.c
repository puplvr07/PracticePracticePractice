#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    char item[50] = "";
    char choice[50];
    float price = 0.0f;
    int quantity = 0;
    char currency = 'P';
    float total = 0.0f;
    bool decision = false; 

    printf("Enter an item to add to your cart: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Enter the price for each item: ");
    scanf("%f", &price);

    printf("Enter the quantity of item: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You bought: %d %s/s, confirm?\n", quantity, item);
    scanf("%s", &choice);
    if(strcmp(choice, "confirm") == 0 || strcmp(choice, "Confirm") == 0)
    {
        decision = true;
    }
    if(decision == true){
        printf("Your total is: %c%.2f\n ", currency, total);
    }
    else{
        printf("Transaction cancelled. \n");
    }
    

    return 0;
}