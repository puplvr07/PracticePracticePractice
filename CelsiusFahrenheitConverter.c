#include <stdio.h>
#include <math.h>

int main() {

    char choice = '\0'; 
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("This is a program to convert temperatures! \n");
    printf("C. Celsius to Fahrenheit\nF. Fahrenheit to Celsius\n");
    printf("Enter your choice (C or F): ");
    scanf("%c", &choice); //SHOULD ALWAYS BE A SINGLE LETTER

    if(choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
        printf("%.2f in Fahrenheit is: %.2fF\n", celsius, fahrenheit);

    }
    else if(choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
        printf("%.2f in Celsius is: %.2fC\n", fahrenheit, celsius);
        
    }
    else {
        printf("Invalid choice. Please enter C or F. \n"); 
    }
    return 0;
}