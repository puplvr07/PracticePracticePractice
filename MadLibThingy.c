#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    char noun[100]="";
    char verb[100]="";
    char adjective1[100]="";
    char adjective2[100]="";
    char adjective3[100]="";

    printf("Think of something, anything. Describe it with an adjective:");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) -1] = '\0';

    printf("Now, what is it? A noun, please: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) -1] = '\0';

    printf("What does it do? A verb, please: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) -1] = '\0';

    printf("Enter another adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) -1] = '\0';

    printf("Enter a final adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) -1] = '\0';

    printf("\n Oh! I think I know what you're talking about. I saw a similar one the other day. \n It was a %s %s that %s all day long. \n The second day, I found out that it was also very %s and %s! \n", adjective1, noun, verb, adjective2, adjective3);

    return 0;
}