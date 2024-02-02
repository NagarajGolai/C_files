#include<stdio.h>
int main()
{
    int num,i,res;

    printf("Enter a number to get multiples : ");
    scanf("%d",&num);

    i = 1;
    while(i<=10)
    {
        res = num * i ;
        printf("%d*%d=%d\n",num,i,res);
        i++;
    }
    return 0;
}
