#include<stdio.h>
int swap(int *, int *);
int main()
{
    int a,b;
    printf("Enter two numbers to swap :\t");
    scanf("%d%d",&a,&b);
    
    printf("The values before swapping:\tA = %d\tB = %d\n",a,b);
    swap(&a,&b);
    printf("The values after swapping:\tA = %d\tB = %d\n",a,b);
}

int swap(int *x, int *y)
{
    int temp;

    temp = *x;              //*x is pointer to a
    *x = *y;                //*y is pointer to b
    *y = temp;
}