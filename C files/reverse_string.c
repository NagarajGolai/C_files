#include <stdio.h>
#include<string.h>
int main()
{
    int i, n;
    char string1[10];

    printf("Enter a string : ");
    scanf("%s", &string1);

    n = strlen(string1);
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", string1[i]);
    }
}