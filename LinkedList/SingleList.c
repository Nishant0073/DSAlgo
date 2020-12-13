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

void insertAtStart()
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
}
void insertAtEnd()
{
	Node *p = getNode();

	if (!start)
	{
		start = p;
	}
	else
	{
		Node *q = start;
		while (q->next != NULL)
		{
			q = q->next;
		}
		q->next = p;
	}
}

void insertAtMid()
{
	Node *p = getNode();
	int loc = 1;
	printf("Enter the location:\n");
	scanf("%d", &loc);
	if (loc < 1)
	{
		printf("Invalid location....\n");
	}
	else if (start == NULL)
	{
		printf("List is empty....\n");
	}
	else
	{
		if (loc == 1)
		{
			p->next = start;
			start = p;
		}
		else
		{
			int cnt = 1;
			Node *q = start;

			while ((cnt != (loc - 1)) && q->next != NULL )
			{
				q = q->next;
				cnt++;
			}
			if (q == NULL)
			{
				printf("Index is out of range....\n");
			}
			else
			{
				Node *r = q->next;
				q->next = p;
				p->next = r;
			}
		}
	}


}

void deletAtStart()
{
	if (start == NULL)
	{
		printf("The list is empty..\n");
	}
	else
	{
		Node *p = start->next;
		free(start);
		start = p;
	}
}

void deletAtEnd()
{
	if (start == NULL)
	{
		printf("The list is empty..\n");
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
			Node *p = start;
			while (p->next->next != NULL)
			{
				p = p->next;
			}
			Node *q = p->next;
			p->next = NULL;
			free(q);
		}
	}
}

void deletAtMid()
{

	int loc = 1;
	printf("Enter the location:\n");
	scanf("%d", &loc);
	if (loc < 1)
	{
		printf("Invalid location....\n");
	}
	else if (start == NULL)
	{
		printf("List is empty....\n");
	}
	else
	{
		if (loc == 1)
		{
			Node *p = start->next;
			free(start);
			start = p;
		}
		else
		{
			int cnt = 1;
			Node *q = start;

			while ((cnt != (loc - 1)) && q->next != NULL )
			{
				q = q->next;
				cnt++;
			}
			if (q == NULL)
			{
				printf("Index is out of range....\n");
			}
			else
			{
				Node *p = q->next->next;
				free(q->next);
				q->next = p;
			}
		}
	}
}

void search()
{
	if (start == NULL)
	{
		printf("List is empty....\n");
	}
	else
	{
		int n;
		printf("Enter the element to Search\n");
		scanf("%d", &n);
		int isfound = 0;
		Node *p = start;
		int cnt = 1;
		while (p != NULL)
		{
			if ( p->data == n)
			{
				printf("%d is found at %d location.\n", n, cnt);
				isfound = 1;
				break;
			}
			cnt++;
			p = p->next;
		}
		if (!isfound)
			printf("Element %d is not found....\n", n);
	}

}

void printList()
{
	if (start == NULL)
	{
		printf("List is empty...\n");
	}
	else
	{
		Node *p = start;
		while (p != NULL)
		{
			printf("%d\n", p->data );
			p = p->next;
		}
	}
}


int main()
{
	while (1)
	{
		int val = 0;
		int exit = 0;
		printf("Enter the option:\n1)Insert At Start\n2)Insert At End\n3)Insert At Mid\n4)Delete At Start\n5)Delete At End\n6)Delete At Mid\n7)Search element\n8)Print the list\n9)Exit\n:");
		scanf("%d", &val);

		switch (val)
		{
		case 1:
			insertAtStart();
			break;
		case 2:
			insertAtEnd();
			break;
		case 3:
			insertAtMid();
			break;
		case 4:
			deletAtStart();
			break;
		case 5:
			deletAtEnd();
			break;
		case 6:
			deletAtMid();
			break;
		case 7:
			search();
			break;
		case 8:
			printList();
			break;
		case 9:
			exit = 1;
			break;
		default :
			printf("Enter valid option...\n");
		}
		if (exit == 1)
			break;

	}
	return 0;
}
