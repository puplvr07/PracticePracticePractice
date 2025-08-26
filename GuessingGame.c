#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //This is a program that has you guess out of 3 words (cat, dog, or rabbit) based on given adjectives.
    char noun[100] = "";
    const char *adjectives[] = {"furry", "playful", "whiskered"};
    const char *words[] = {"cat", "dog", "rabbit"};
    int num_words = sizeof(words) / sizeof(words[0]);
    int max_tries = 3;

    srand((unsigned int)time(NULL));
    int secret_index = rand() % num_words;
    const char *secret_word = words[secret_index];

    if(strcmp(secret_word, "cat") == 0 || strcmp(secret_word, "Cat") == 0) {
        adjectives[0] = "furry";
        adjectives[1] = "playful";
        adjectives[2] = "whiskered";
    } else if(strcmp(secret_word, "dog") == 0 || strcmp(secret_word, "Dog") == 0) {
        adjectives[0] = "loyal";
        adjectives[1] = "barking";
        adjectives[2] = "wagging";
    } else if(strcmp(secret_word, "bunny") == 0 || strcmp(secret_word, "Bunny") == 0) {
        adjectives[0] = "hopping";
        adjectives[1] = "soft";
        adjectives[2] = "long-eared";
    }

    int guessed = 0;
    for(int i = 0; i < max_tries; i++) {
        printf("Hint: It is %s.\n", adjectives[i]);
        printf("Guess: ");
        scanf("%99s", noun);

        if(strcmp(noun, secret_word) == 0) {
            printf("Correct! You guessed it!\n");
            guessed = 1;
            break;
        } else {
            printf("Nope! Try again.\n");
        }
    }

    if(!guessed) {
        printf("Sorry, the answer was: %s\n", secret_word);
    }

    return 0;

}

}
