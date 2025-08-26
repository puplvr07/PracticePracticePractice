#include <stdio.h>
#include <math.h>

int main() {
    
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;
    
    printf("This is a program to calculate weight conversions! \n");
    printf("1. Kilograms to Pounds\n2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462f;
        printf("%.2f in pounds: %.2flbs\n", kilograms, pounds);

    }
    else if(choice == 2) {
        printf("Enter weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462f;
        printf("%.2f in kilograms: %.2fkg\n", pounds, kilograms);
    }
    else {
        printf("Invalid choice. Please enter 1 or 2. \n");
        return 1;
    }

}