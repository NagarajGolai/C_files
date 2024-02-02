#include <stdio.h>
int main()
{
    int first_num, large_num, small_num, arr[50];
    int i, n;

    printf("Enter the number of array elements:\t");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the array element no.%d:\t", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    first_num = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] >= first_num)
        {
            large_num = arr[i];
        }
        if (arr[i] <= first_num)
        {
            small_num = arr[i];
        }
    }
    printf("\nThe largest number is %d", large_num);
    printf("\nThe smallest number is %d", small_num);

    // return 0;
}