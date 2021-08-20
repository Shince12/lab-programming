#include<stdio.h>
#define MAX 10

int queue[MAX],rear=-1,front=-1;
int insert();
int delete();
int display();

int main(void)
{
	clrscr();
	int ch;
	do
	{
		printf("\n****MAIN MENU****");
		printf("\n1.INSERT");
		printf("\n2.DELETE");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert	();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			default:
				printf("\nIncorrect Choice");
		}
	}while(ch!=4);
	return 0;
}
int insert()
{
	int item;
	if(rear==MAX-1)
	{
		printf("Overflow");
	}
	else
	{
		printf("Enter element to be inserted:");
		scanf("%d",&item);
		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=item;
	}
	return 0;
}
int delete()
{
	int val;
	if(front==-1 || front>rear)
		printf("Underflow");
	else
	{
		val=queue[front];
		front=front+1;
		printf("delelted element is &d",val);
	}
	return 0;
}
int display()
{
	int i;
	if(front==-1 && rear==-1)
		printf("Queue is empty");
	else
	{
		printf("***Queue***\n");
		for(i=0;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
	return 0;
}
