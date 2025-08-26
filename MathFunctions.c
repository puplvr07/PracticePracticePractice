#include <stdio.h>
#include <math.h>

int main() 
{
    double x = 4;

    x = sqrt(x);
    printf("%.2lf\n", x);

    x = pow(x, 10);
    printf("%.2lf\n", x);

    x = x*-1;
    printf("%.2lf\n", x);

    x = fabs(x);
    printf("%.2lf\n", x);

    x = log(x);
    printf("%.2lf\n", x);

    x = ceil(x); //round up
    printf("%.2lf\n", x);

    x = floor (x); //round down
    printf("%.2lf\n", x);

    x = round(x); //round to nearest integer
    printf("%.2lf\n", x);

    x = sin(x);
    printf("%.2lf\n", x);

    x = cos(x);
    printf("%.2lf\n", x);

    x = tan(x);
    printf("%.2lf\n", x);

    x = x*10;
    printf("%.2lf\n", x);
    
    return 0;
}