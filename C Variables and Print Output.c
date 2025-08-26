#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>

int main()
   {
    int age = 8.55;
    printf("I am %d years old. \n", age);
    age+=3;
    int num = age*7;
    printf("Next year, I will be %d years old. \n", num);
    return 0;
   }
   // You cannot create variable names with spaces in between.
   // You cannot start a variable name with a number.
   // You cannot use certain words as variable names. (ex: if, int, return, etc.)
   // Variables names are case sensitive.