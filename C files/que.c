/* To implement Queue using array*/
#include<stdio.h>
#define max_size 3
typedef struct
{
	int que[max_size];
	int front,rear;
} QUEUE;

void insert(QUEUE *,int);
int delet(QUEUE *);
void display(QUEUE);

int main()
{
	int choice;
	int item;
	QUEUE q;
	q.front = 0;
	q.rear=0;
    	do
	{
		printf("\n\n--------QUEUE OPERATIONS-----------\n");
		printf("1.Insert\t");
		printf("2.Delete\t");
		printf("3.Display\t");
		printf("4.Exit\n");
		printf("-----------------------");
		printf("\nEnter your choice:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter an element to Inserted:");
				scanf("%d", &item);
				insert(&q,item);
				break;
			case 2:
			    item=delet(&q);
				if(item != -1)
                  printf("\nDeleted element is %d",item);
				break;

			case 3:
			    display(q);
			    break;

		}
	} while(choice < 4);
	return 0;
}

void insert (QUEUE  *q,int num)
{
	if(q->rear == max_size)
	{
		printf("\nQueue is full\n");
	}
	else
	{
		q->que[q->rear++]=num;
		//q->rear++;
	}
}

int delet(QUEUE *q)
{
	int x;

	if(q->front == q->rear)
	{
		printf("\n Queue is empty\n");
		return(-1);
	}
	else
	{
		x=q->que[q->front];
		q->front++;
		return(x);
	}
}

void display(QUEUE q)
{   int i;
	if(q.front == q.rear)
	{
		printf("\n The queue is empty...");
	}
	else
	{
		printf("\n The elements of the queue are:\n Front ");
		for(i=q.front;i<q.rear;i++)
		{
			printf("<-- %d\t", q.que[i]);
		}
	}
}
