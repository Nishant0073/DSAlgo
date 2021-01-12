#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>

typedef struct Node NODE;

struct Node
{
	int data;
	NODE *next;
	NODE *pre;
};

NODE *start = NULL;
void insertAtstart()
{
	int n;
	printf("Enter the data:\n");
	scanf("%d", &n);
	NODE *p = (NODE* ) malloc(sizeof(NODE));
	p->data = n;
	p->next = NULL;
	p->pre = NULL;
	if (start == NULL )
	{
		start = p;
	}
	else
	{
		p->next = start;
		start->pre = p;
		start = p;
	}

}

void insertAtend()
{
	int n;
	printf("Enter the data:\n");
	scanf("%d", &n);
	NODE *p = (NODE* ) malloc(sizeof(NODE));
	p->data = n;
	p->next = NULL;

	if (start == NULL)
	{
		printf("The LinkedList is empty hence elment is inserted at start of LinkedList.\n");
		start = p;
	}
	else
	{

		NODE *q = (NODE* ) malloc(sizeof(NODE));

		q = start;
		while (q->next != NULL)
		{
			q = q->next;
		}
		q->next = p;
		p->pre = q;
	}

}

void insertAtgiven()
{
	int loc = 1;
	int n;
	printf("Enter the data:\n");
	scanf("%d", &n);
	printf("Enter the location:\n");
	scanf("%d", &loc);
	NODE *p = (NODE* ) malloc(sizeof(NODE));
	p->data = n;
	p->next = NULL;
	p->pre = NULL;
	if (start == NULL)
	{
		if (loc == 1)
		{
			p->next = start;
			start->pre = p;
			start = p;
		}
		else
		{
			printf("Opration cannot be preformed The LinkedList is empty .\n");
			free(p);
		}
	}
	else if (loc == 1)
	{
		p->next = start;
		start->pre = p;
		start = p;
	}
	else {
		int c = 1;
		NODE * q = (NODE* ) malloc(sizeof(NODE));
		q = start;
		while (c < loc - 1 && q != NULL)
		{
			q = q->next;
			c++;
		}
		if (q == NULL)
		{
			printf("Invalid Index\n");
		}
		else
		{
			p->next = q->next;
			q->next = p;
			p->pre = q;
		}
	}
}
void deletAtstart()
{
	if (start == NULL)
	{
		printf("The Linked List is empty. \n");
	}
	else
	{
		if (start->next == NULL)
		{
			free(start);
			start = NULL;
		}
		else
		{
			NODE *p = (NODE*)malloc(sizeof(NODE));
			p = start->next;
			free(start);
			p->pre = NULL;
			start = p;
		}
	}
}
void deletAtend()
{
	if (start == NULL)
	{
		printf("The LinkedList is empty\n");
	}
	else if (start->next == NULL)
	{
		start->next = NULL;
		start->pre = NULL;
		free(start);
		start = NULL;
	}
	else
	{
		NODE *p = (NODE*)malloc(sizeof(NODE));
		p = start;
		while (p->next->next != NULL)
		{
			p = p->next;
		}

		NODE *q = (NODE*)malloc(sizeof(NODE));
		q = p->next;
		free(q);
		p->next = NULL;
	}
}

void deletAtgiven()
{
	int loc;
	printf("Enter the Index:\n");
	scanf("%d", &loc);
	if (start == NULL)
	{
		printf("The linked list is empty\n");
	}
	else if (loc == 1)
	{
		if (start->next == NULL)
		{
			free(start);
			start = NULL;
		}
		else
		{
			NODE *p = (NODE*)malloc(sizeof(NODE));
			p = start->next;
			free(start);
			p->pre = NULL;
			start = p;
		}
	}
	else
	{
		NODE *p = (NODE*)malloc(sizeof(NODE));
		p = start;
		int c = 1;
		while (c < loc - 1 && p != NULL)
		{
			p = p->next;
			c++;
		}

		if (p == NULL)
		{
			printf("The Index is Invalid.\n");
		}
		else
		{
			NODE *q = (NODE*)malloc(sizeof(NODE));
			q = p->next;
			p->next = p->next->next;
			if (q->next != NULL)
			{
				q->next->pre = p;
			}
			free(q);


		}
	}
}

void transeverse()
{
	if (start == NULL)
	{
		printf("The LinkedList is empty\n");
	}
	else
	{
		NODE *p = (NODE*)malloc(sizeof(NODE));
		p = start;
		while (p->next != NULL)
		{
			printf("%d\n", p->data );
			p = p->next;
		}
		printf("%d\n", p->data );
	}
}


int main()
{
	while (1)
	{
		printf("Enter the option:\n1)Insert at start \n2)Insrt at end  \n3)Insert At given location\n4)Delete at start\n5)Delete at end\n6)Delete at given location\n7)Transeverse\n8)Exit:\n:");
		int n;
		bool flag = true;
		scanf("%d", &n);
		switch (n)
		{
		case 1: insertAtstart();
			break;
		case 2: insertAtend();
			break;
		case 3: insertAtgiven();
			break;
		case 4: deletAtstart();
			break;
		case 5: deletAtend();
			break;
		case 6: deletAtgiven();
			break;
		case 7: transeverse();
			break;
		case 8:
			flag = false;
			break;
		default:
			printf("Enter valid option\n");
		}
		if (!flag)
		{
			break;
		}
	}
}
