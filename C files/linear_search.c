#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, flag = 0, a[20], key;

    printf("Enter the array lenght:\t");
    scanf("%d", &n);
    printf("Enter the elements :\t");
    for (i = 0; i < n; i++)
    {
        printf("Index %d. ",i);
        scanf("%d", &a[i]);
    }

    printf("Enter a key to search : ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The key %d is found at the index %d", key, i);
    }
    else
    {
        printf("The key is not found!!!\n");
    }
}