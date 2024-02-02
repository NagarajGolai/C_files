#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char temp,s[20],r[20];

    printf("Enter a string:\t");
    scanf("%s",s);

    n = 0;
    printf("%d",n);

    for(i=strlen(s)-1;i>=0;i--)
    {
        temp = s[i];
        r[n] = temp;
        n++;
    }
    printf("The entered string is:\t%s\n",s);
    printf("The reversed string is : %s\n",r);
    return 0;
}