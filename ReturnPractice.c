#include <stdio.h>

double avg(double x, double y, double z){
  double mean = (x + y + z) / 3.0;
  return mean;
}

int main(){
  
  double a;
  double b;
  double c;

  printf("This is a program that returns the average of three numbers. \n");
  printf("Enter the first number: ");
  scanf("%lf", &a);

  printf("Enter the second number: ");
  scanf("%lf", &b);

  printf("Enter the third number: ");
  scanf("%lf", &c);
  
  double average = avg(a, b, c);

  printf("The average of %.2lf, %.2lf, and %.2lf is %lf \n", a, b, c, average);

  return 0;

}