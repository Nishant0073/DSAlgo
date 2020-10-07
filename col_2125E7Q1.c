//Que. Implement stack using array
#include <stdbool.h>
#include<stdio.h>
#include <stdlib.h>

int stack[100] = {0};
int start = 0;
int end = 0;


void push()
{
	if (end == 100)
	{
		printf("Stack is Full.\n");
	}
	else
	{
		int n;
		printf("Enter the number to push.\n");
		scanf("%d", &n);
		stack[end] = n;
		end++;
	}
}

void top()
{
	if (end == 0)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("\nThe elemets at the top of stack is:%d\n", (stack[end - 1]));
	}
}

void pop()
{
	if (end == 0)
	{
		printf("Stack is Empty.\n");
	}
	else
	{
		end--;
	}
}


int main()
{
	bool flag = false;
	do
	{
		int n;
		printf("Enter the option:\n1)Push element\n2)Pop element\n3)Element at the top.\n4)Break:");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			push(); break;
		case 2:
			pop(); break;
		case 3:
			top(); break;
		case 4:
			flag = true; break;
		default: printf("Enter valid option:\n"); break;
		}

	} while (!flag);
}