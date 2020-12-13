//Static Stack in C.
//Code By Nishant_0073 (Nishant Shingate)


#include<stdio.h>
#include <stdlib.h>
#define ssize 5
int stack[ssize];
int end = 0;

void push()
{
	if (end >= ssize)
	{
		printf("The stack is full...\n");
	}
	else
	{
		int data;
		printf("Enter the element to be push: \n");
		scanf("%d", &data);
		stack[end] = data;
		end++;

		printf("%d is pushed.\n", data);

	}
}

void pop()
{
	if (end == 0)
	{
		printf("Stack is empty..\n");
	}
	else
	{
		int data = stack[end - 1];
		printf("%d is poped.\n", data );
		end--;
	}
}

void top()
{
	if (end == 0)
	{
		printf("Stack is empty..\n");
	}
	else
	{
		int data = stack[end - 1];
		printf("%d is present at top.\n", data);
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
