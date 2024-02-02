#include <stdio.h>
struct student_data
{
    char name[20];
    int rollno;
    float sgpa;
};

void read(struct student_data s[], int n);
void display(struct student_data s[], int n);

void display(struct student_data s[], int n)
{
    printf("\nThe student details are:\t");
    printf("\nName\tRoll No.\tSGPA\n");
    for (int j = 0; j < n; j++)
    {
        printf("%s\t%d\t\t%f\n", s[j].name, s[j].rollno, s[j].sgpa);
    }
    printf("\n");
}

int main()
{
    struct student_data s[10];
    int n;

    read(s,n);
    display(s,n);
}

void read(struct student_data s[], int n)
{
    printf("Enter the number of students:\t");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the student name, roll no. and SGPA:\t");
        scanf("%s%d%f", s[i].name, &s[i].rollno, &s[i].sgpa);
    }
    // return s;
}
