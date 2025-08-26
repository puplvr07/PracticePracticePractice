#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0;
    double rate = 0.0;
    double years = 0.0;
    double timesCompounded = 0.0;
    double total = 0.0;

    printf("This is a program to calculate the total amount of an investment based on compound interest! \n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the number of years (t): ");
    scanf("%lf", &years);

    printf("Enter the number of times the interest is compounded per year (n): ");
    scanf("%lf", &timesCompounded);

    total = principal * pow((1 + rate / timesCompounded), (timesCompounded * years));

    printf("The total amount after %.2lf years is: %.2lf\n", years, total);

    return 0;
}