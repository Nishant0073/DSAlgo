#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int data;
	struct Node* next;
};

void traverse(struct Node* start)
{
	struct Node* p = start;
	while (p)
	{
		printf("%d -> ", p->data);
		p = p->next;
	}

	printf("NULL\n");
}

void insert(struct Node**	 start, int data)
{
	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
	p->data = data;
	p->next=NULL;
	struct Node* q =*start;

	if(q==NULL)
	{
		*start = p;
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next = p;
	}
}


void movetoend(struct Node** p, struct Node** q)
{

	if (*q == NULL)
		return;

	struct Node* r = *q;

	*q = (*q)->next;

	r->next = *p;
	*p = r;
}


void move(struct Node* start)
{

	if (start == NULL)
		return;


	struct Node *odd = start;
	struct Node *even = NULL, *prev = NULL;


	while (odd && odd->next)
	{

		movetoend(&even, &(odd->next));


		prev = odd;
		odd = odd->next;
	}


	if (odd)
		odd->next = even;
	else
		prev->next = even;
}


int main(void)
{



	struct Node* start = NULL;

	printf("Enter the size of list:\n");
	int n;
	scanf("%d", &n);

	printf("Enter the %d elements of list:\n");
	for (int i = 0; i < n; i++)
	{
		int data;
		scanf("%d", &data);
		insert(&start, data);
	}

	printf("The Enterd list is:\n");
	traverse(start);

	move(start);

	printf("After moveing even elements at end of list:\n");
	traverse(start);

	return 0;
}


