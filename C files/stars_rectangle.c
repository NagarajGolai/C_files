#include <stdio.h>
int main()
{
    int i, j, rows, cols;

    printf("Enter the rows and columns : ");
    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++)      //prints the first line
        printf("* ");

    printf("\n");
    for (i = 0; i < cols - 2; i++)          //for columns
    {
        for (j = 0; j < rows - 1; j++)      //for rows
        {
            if (j == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("*\n");
    }
    for (i = 0; i < rows; i++)      //prints the last line
        printf("* ");
}