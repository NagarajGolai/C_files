#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
}s1[5];

int read();
void display();

int main()
{
    read();
    display();
}

int read()
{
    printf("Enter the student name and rollno : \n");
    for(int i=0; i<5; i++)
    {
        printf("Student %d(name and rollno). ",i+1);
        scanf("%s %d",s1[i].name,&s1[i].rollno);
    }
}
void display()
{
    for(int i=0; i<5; i++)
    {
        printf("Student name -> %s | Student rollno -> %d\n",s1[i].name,s1[i].rollno);
    }
}