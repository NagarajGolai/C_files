#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[10], sen[10];
    printf("enter c  :  ");
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%[^\n]",sen);  
    
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}