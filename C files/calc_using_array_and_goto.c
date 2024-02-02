#include <stdio.h>
int main()
{
    int array[] = {'+', '-', '*', '/'};
    int i, num1, num2;
    float res;
    char op, cop;

    printf("\nEnter the equation:\t");
    scanf("%d%c%d", &num1, &op, &num2);

    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        if (array[i] == op)
        {
            cop = array[i];                //cop refers to current operator
            break;
        }
    }

    if (cop == array[0])
        goto plus;
    else if (cop == array[1])
        goto minus;
    else if (cop == array[2])
        goto multiply;
    else if (cop == array[3])
        goto divide;

plus:
    res = num1 + num2;
    printf("The result is the addition of %d and %d is %0.3f", num1, num2, res);
    goto End;
minus:
    res = num1 - num2;
    printf("The result is the subtraction of %d and %d is %0.3f", num1, num2, res);
    goto End;
multiply:
    res = num1 * num2;
    printf("The result is the multiplication of %d and %d is %0.3f", num1, num2, res);
    goto End;
divide:
    if (num2 != 0)
    {
        res = (float)num1 / (float)num2;
        printf("The result is the division of %d and %d is %0.3f", num1, num2, res);
    }
    else
        printf("Error : The denominator is zero. Hence division cannot be performed!!!");
    goto End;

End:
    printf("\n");
}