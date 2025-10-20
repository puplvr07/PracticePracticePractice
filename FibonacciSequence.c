#include <stdio.h>

int main(){
    int i, a, b, c, d;

    printf("Enter the first two numbers separated by space: ");
    scanf("%d %d", &a, &b);

    printf("How many numbers are in the fibonacci sequence: ");
    scanf("%d", &d);

    printf("%d %d ", a, b);

    for(i=0; i<d; i++){

        c = a + b;
        printf("%d ",c);

        a = b;
        b = c;

    }
}
