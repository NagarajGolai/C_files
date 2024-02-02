#include <stdio.h>
#include <string.h>
#define MAX 4
struct manager
{
    char names[MAX][20];
    int front;
    int rear;
};
int i;

void write(struct manager *Abhi)
{
    char person_name[20];
    printf("Enter a name to enter the queue : ");
    scanf("%s", person_name);
    if (Abhi->rear == MAX)
    {
        printf("Queue is full!\n");
    }
    else
    {
        strcpy(Abhi->names[Abhi->rear], person_name);
        Abhi->rear++;
    }
}

void delete(struct manager *Abhi)
{
    if (Abhi->front == Abhi->rear)
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The deleted element is %s\n", Abhi->names[Abhi->front]);
        Abhi->front++;
    }
}

void display(struct manager *Abhi)
{
    for (i = Abhi->front; i < Abhi->rear; i++)
    {
        printf("%d. %s\n", i, Abhi->names[i]);
    }
}

void main()
{
    int choice;
    struct manager Abhi;
    Abhi.front = Abhi.rear = 0;

    do
    {
        printf("\nEnter 1 to enter the name\nEnter 2 to delete the name\nEnter 3 to display\nEnter 4 to exit : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            write(&Abhi);
            break;

        case 2:
            delete (&Abhi);
            break;

        case 3:
            display(&Abhi);
            break;

        case 4:
            printf("Exited\n");
            break;
        }
    } while (choice < 4);
}