#include <stdio.h>
#include <string.h>

void Pets(int choice) {

    switch (choice)
    {
    case 1:
    printf("      /\\_/\\  \n");
    printf("     ( o.o ) \n");
    printf("      > ^ <  \n");
    break;

    case 2:
    printf("  / \\__\n");
    printf(" (    @\\___\n");
    printf(" /         O\n");
    printf("/   (_____/\n");
    printf("/_____/   U\n");
    break;

    case 3:
    printf("      /\\ \n");
    printf("    _/./ \n");
    printf(" ,-'    `-:.,-'/ \n");
    printf("> O )<)    _  ( \n");
    printf(" `-._  _.:' `-.\\ \n");
    printf("      `` ;\n");
    break;

    case 4:
    printf("          __ \n");
    printf("         /'{> \n");
    printf("     ____) (____ \n");
    printf("   //'--;   ;--'\\\\ \n");
    printf("  ///////\\_/\\\\\\\\\\\\\\ \n");
    printf("         m m \n");
    break;

    default:
    printf("Invalid choice! Please select a number between 1 and 4. \n");
    break;

    }
}


int main() 
{
    int choice;

    petshop: 
    printf("This is a program that practices void functions!\n");
    printf("Which pet would you like to keep? \n");
    printf("1. Cat 2. Dog 3. Fish 4. Bird \n");
    printf("Please enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    Pets(choice);
    printf("Thank you! Please take good care of it :>");
    return 0;
}