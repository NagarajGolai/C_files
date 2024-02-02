#include <stdio.h>
int main()
{
    int i, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
        printf("*  ");
    printf("\n");

    for (i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (j == n || j == 0)
                printf("*  ");
            else
                printf("   ");
        }
        printf("*\n");
    }
    for (i = 0; i < n; i++)
        printf("*  ");

    printf("\n\n");
}