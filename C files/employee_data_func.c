#include<stdio.h>
struct employee
{
    char name[20];
    int salary;
};
struct employee e1;

void read()
{
    printf("\nEnter the employee name and salary\t:");
    scanf("%s%d",e1.name,&e1.salary);
}
void display()
{
    printf("\nThe employee details are:\n");
    printf("-----------------\n");
    printf("Name -> %s\t|Salary -> %d",e1.name,e1.salary);
}
int main()
{
    read();
    display();
}
