#include <stdio.h>
int main()
{
    int array[5], rev_array[5], i, j, n = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter element %d. ", i);
        scanf("%d", &array[i]);
    }
    printf("Original array is :\n");
    for (i = 0; i < 5; i++)
    {
        printf("Element %d is %d\n", i, array[i]);
    }
    // i = 0;
    // int j = sizeof(array)/sizeof(array[0]) - 1;
    printf("\nReverse array is :\n");
    for (i = 0, j = sizeof(array) / sizeof(array[0]) - 1; i < 5; i++, j--)
    {
        rev_array[i] = array[j];
        printf("Element %d is %d\n", i, rev_array[i]);
    }
        // while (i < 5)
        // {
        //     rev_array[i] = array[j];
        //     j--;
        //     i++;
        // }

        
    // for (i = 0; i < 5; i++)
    // {
    //     printf("Element %d is %d\n", i, rev_array[i]);
    // }
}