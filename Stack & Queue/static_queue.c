//Static Queue in C.
//Code By Nishant_0073 (Nishant Shingate)


#include<stdio.h>
#include<stdlib.h>
#define size 5
typedef struct NODE Node;
int rear = -1, front = -1;
int queue[size];


void push()
{
	if (front >= (size - 1))
	{
		printf("Queue is full.\n");
	}
	else
	{
		int data;
		printf("Enter the element to be pushed.\n");
		scanf("%d", &data);
		queue[front + 1] = data;
		printf("%d is pushed.\n", data);
		front++;
	}
}

void pop()
{
	if (rear == front)
	{
		printf("Queue is empty.\n");
	}
	else
	{
		rear++;
		printf("%d is poped\n", queue[rear] );
	}
}

void top()
{
	if (rear == front)
	{
		printf("The queue is empty.\n");
	}
	else
	{
		printf("%d is top of queue\n", queue[rear + 1] );
	}
}


int main()
{
	while (1)
	{
		int val;
		int exit = 0;
		printf("***********Menu**************\n1)Push Element\n2)Pop Element\n3)Element at Top\n4)Exit\n-----------------------------\nEnter options: ");
		scanf("%d", &val);
		switch (val)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			top();
			break;
		case 4:
			exit = 1;
			break;
		default:
			printf("Invalid option....\n");
		}

		if (exit == 1)
			break;
	}
}

