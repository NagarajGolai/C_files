#include <stdio.h>
#include <ctype.h>

int read(int *, char *, int *);
int calc(int, char, int);

int main()
{
    int i, num1, num2;
    char op, key,opt = 'y';

    read(&num1, &op, &num2);
    calc(num1, op, num2);

    printf("\nTo continue press Y and to exit press any other key : ");
    scanf(" %c", &key);

    if (tolower(key) == opt)
    {
        printf("Key is %c . To exit enter any character other than Y or y.\n",key);
        main();
    }
    else
    {
        printf("Done!\n");
        return 0;
    }
}
int read(int *num1, char *op, int *num2)
{
    printf("Enter the equation : ");
    scanf("%d%c%d", num1, op, num2);
}
int calc(int num1, char op, int num2)
{
    float res;

    if (op == '+')
    {
        res = num1 + num2;
        printf("The result is the addition of %d and %d is %0.3f", num1, num2, res);
    }
    else if (op == '-')
    {
        res = num1 - num2;
        printf("The result is the subtraction of %d and %d is %0.3f", num1, num2, res);
    }
    else if (op == '*')
    {
        res = num1 * num2;
        printf("The result is the multiplication of %d and %d is %0.3f", num1, num2, res);
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            res = (float)num1 / (float)num2;
            printf("The result is the division of %d and %d is %0.3f", num1, num2, res);
        }
        else
            printf("Error : The denominator is zero. Hence division cannot be performed!!!");
    }

}