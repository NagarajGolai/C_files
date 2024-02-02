#include <stdio.h>
struct employee
{
    char name[20];
    int salary;
};
struct employee e[20];
int i, n, low_sal, high_sal;
char low_name[20], high_name[20];

void read()
{
    printf("Enter the number of entries:\t");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the employee name and salary : ");
        scanf("%s%d", e[i].name, &e[i].salary);
    }
    // return e;
}
void display()
{
    printf("\nThe employee details are:\n");
    printf("---------------------\n");
    printf("   Name\t\t\tSalary\n");
    for (i = 0; i < n; i++)
    {
        printf("%d. %s\t\t\t%d\n", i+1, e[i].name, e[i].salary);
    }
    for(int j=0; j<n; j++)
    {
        if(e[j].salary > e[j+1].salary)
        {
            high_sal = e[j].salary; //high_name = e[j].name;
        }
    }
    for(int k =0;k<n;k++)
    {
        if(e[k].salary < e[k+1].salary)
        {
            low_sal = e[k].salary; //low_name = e[k].name;
        }
    }
    printf("The lowest salary getter is with %d\n",high_sal);
    printf("The highest salary getter is with %d\n",low_sal);
}
int main()
{
    read();
    display();
}

