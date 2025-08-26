#include <stdio.h>

int main() {

    char operator = '\0';
    double num1 = 0.0, num2 = 0.0, result = 0.0;

    printf("This is a simple calculator program!\n");

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+ - * /): ");
    scanf(" %c", &operator); //space before %c to consume any leftover whitespace

    printf("Enter another number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        
        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if(num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            else{
            result = num1 / num2;
            }
            break;
        
        default:
            printf("Invalid operator! Please only use +, -, *, or /.\n");
            break;

    }
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
    return 0;

}
