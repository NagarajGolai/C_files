#include <stdio.h>
int main()
{
    int a[20], i, n, temp;

    printf("Enter the array size:\t");
    scanf("%d",&n);
    printf("Enter the array elements:\t");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {    
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nThe sorted array is:\n");
    for (int k = 0; k < n; k++)
        printf("%d, ", a[k]);
}