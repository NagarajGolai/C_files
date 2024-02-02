#include<stdio.h>
struct sparse
{
    int row,col,value;
};
struct sparse a[10];
int main()
{
    int i,j,n,k=1;

    printf("Enter the number of rows:\t");
    scanf("%d",&a[0].row);
    printf("Enter the number of columns:\t");
    scanf("%d",&a[0].col);
    printf("Enter the number of non zero elements:\t");
    scanf("%d",&a[0].value);

    for(i=1;i<=a[0].value;i++)
    {
        printf("\nEnter triplet %d:\t",i);
        printf("\nrow :\t\t");
        scanf("%d",&a[i].row);
        printf("column :\t");
        scanf("%d",&a[i].col);
        printf("value :\t\t");
        scanf("%d",&a[i].value);
    }
    printf("\nThe triplets are :\n");
    printf("\tRows\tColumns\tValues\n");
    for(i=1;i<=a[0].value;i++)
    {
        printf("\t  %d\t  %d\t  %d\n",a[i].row,a[i].col,a[i].value);
    }

    printf("\n--------------------------------------\n");
    for(i=0;i<=a[0].row;i++)
    {
        printf("\n");
        for(j=0;j<=a[0].col;j++)
        {
            if(a[k].row == i && a[k].col == j)
            {
                printf("\t%d",a[k].value);
            }
            else
            {
                printf("\t0");
            }

        }
    }
}