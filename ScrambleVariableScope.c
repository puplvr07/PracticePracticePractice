#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

void scrambledWord(char word[]) {
    char scrambled[100];            
    strcpy(scrambled, word);       
    int length = strlen(scrambled);

    for (int i = length - 1; i > 0; i--) {
        int j = rand() % (i + 1);   // modulo sh
        char temp = scrambled[i];  
        scrambled[i] = scrambled[j];
        scrambled[j] = temp;
    }

    printf("Your scrambled word is: %s\n", scrambled);
}
int main() {
    srand(time(NULL)); // Random number generator 🤖

    printf("This is a program that can scramble a word that you input! \n");

    char user[100]; 
    printf("Enter a word to scramble: ");
    scanf("%[^\n]s", user); // Word can have spaces

    printf("The original word is: %s\n", user);

    printf("Working on it"); // decided to add just bc ;P
    Sleep(800);
    printf(".");
    Sleep(800);
    printf(".");
    Sleep(1000);
    printf(". \n");

    scrambledWord(user);

    return 0;
}


