#include<stdio.h>
typedef struct NODE
{
    int data;
    struct NODE *link;
}*NODE;

int read();
void display();
NODE first;

int main()
{
    read();  
}

int read()
{
    NODE p;
    first = p;
    printf("Enter the data and the corresponding link : ");
    scanf("%d",&p->data);
    if (first == NULL)
    {
        printf("The list is empty!");
    }
    else
    {
        printf("The data is %d at the link %d",p->data,first);
    }
}