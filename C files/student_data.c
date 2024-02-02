#include <stdio.h>
struct student_data
{
    char name[20];
    int rollno;
    float sgpa;
};
struct student_data s[10];

void read();
void display();

int main()
{
    read();
    display();
}

int i, n;
void read()
{
    printf("Enter the number of students:\t");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the student name, roll no. and SGPA:\t");
        scanf("%s%d%f", s[i].name, &s[i].rollno, &s[i].sgpa);
    }
    // return(s);
}

void display()
{
    printf("\nThe student details are:\t");
    printf("\nName\tRoll No.\tSGPA\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\t\t%f\n", s[i].name, s[i].rollno, s[i].sgpa);
    }
    printf("\n");
}