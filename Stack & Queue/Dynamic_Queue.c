//Dynamic Queue in C.
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
		if (start->next == NULL)
		{
			printf("%d is poped\n", start->data );
			free(start);
			start = NULL;
		}
		else
		{
			Node *q = start;
			while (q->next->next != NULL)
			{
				q = q->next;
			}

			printf("%d is poped.\n", q->next->data);
			free(q->next);
			q->next = NULL;
		}
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
		Node *q = start;
		while (q->next != NULL)
		{
			q = q->next;
		}
		printf("%d is top of Queue.\n", q->data);
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

