#include <stdio.h>

int main() {

    char operator = '\0';
    double num1 = 0.0, num2 = 0.0, result = 0.0;

    printf("This is a simple calculator program!\n");

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter another number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            break;
        
        default:
            printf("Invalid operator! Please only use +, -, *, or /.\n");
            break;

    }

    return 0;

}