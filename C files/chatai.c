#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char text[][20] = {"hey", "hello", "hii", "hi"};
    char input[20];

    printf("This is ChatGPT(lol)\n");
    int lenoftext = sizeof(text) / sizeof(text[0]);

    for (int i = 0; i < lenoftext; i++)
    {
        printf("You  : ");
        scanf("%s", input);
        for (int j = 0; input[j]; j++)
        {
            input[j] = tolower(input[j]);
        }
        if (strcmp(input, text[i]) == 0)
            printf("Hello there!\n");
            // break;
        else 
            printf("I'm unable to answer this!!!\n");
            // continue;
    }
}