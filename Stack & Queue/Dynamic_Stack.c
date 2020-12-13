//Dynamic Stack in C.
//Code By Nishant_0073 (Nishant Shingate)


#include<stdio.h>
#include<stdlib.h>
typedef struct NODE Node;


struct NODE
{
	int data;
	Node *next;
};

Node *start = NULL;

Node* getNode()
{
	Node *p = malloc(sizeof(Node));
	p->next = NULL;
	printf("Enter the data:\n");
	scanf("%d", &p->data);
	return p;
}


void push()
{
	Node *p = getNode();

	if (!start)
	{
		start = p;
	}
	else
	{
		p->next = start;
		start = p;
	}

	printf("%d is pushed\n", p->data);
}

void pop()
{
	if (start == NULL)
	{
		printf("Stack is empty..\n");
	}
	else
	{
		int data = start->data;
		Node *p = start->next;
		printf("%d is poped\n", data);
		free(start);
		start = p;
	}

}

void top()
{
	if (start == NULL)
	{
		printf("The stack is empty.\n");
	}
	else
	{
		printf("%d is on the top of stack.\n", start->data );
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

