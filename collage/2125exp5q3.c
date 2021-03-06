//sub.          : Data Structure
//Div.          : B (SYCSE)
//Batch 		: B2
//Roll No.      : 2125 (19131083)
//Practical No. : 5
//Que. No.      : 3

/* Que. Construct a linked list by merging alternate nodes of two linked list.
For example, if given linked list are 1,9,3 and 6,11,5 then output list shall be 1,6,9,11,3,5 */

#include<stdio.h>
#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>

typedef struct Node NODE;

struct Node
{
	int data;
	NODE *next;
};
NODE*  insert(NODE *start, int data)
{
	if (start == NULL)
	{
		NODE *p = (NODE*)malloc(sizeof(NODE));
		p->data = data;
		p->next = NULL;
		start = p;
	}
	else
	{

		NODE *p = (NODE*)malloc(sizeof(NODE));
		p->data = data;
		p->next = NULL;

		NODE *q = (NODE*)malloc(sizeof(NODE));
		q = start;
		while (q->next != NULL)
		{
			q = q->next;
		}
		q->next = p;
	}
	return start;
}

NODE* margelist(NODE *FirstL, NODE *SecondL, NODE *MargeL)
{
	while (FirstL != NULL || SecondL != NULL)
	{
		if (FirstL == NULL && SecondL != NULL)
		{
			while (SecondL != NULL)
			{
				MargeL = insert(MargeL, SecondL->data);
				SecondL = SecondL->next;
			}
		}
		else if (FirstL != NULL && SecondL == NULL)
		{
			while (FirstL != NULL)
			{
				MargeL = insert(MargeL, FirstL->data);
				FirstL = FirstL->next;
			}
		}
		else
		{
			int c = 1;
			while (FirstL != NULL && SecondL != NULL)
			{
				if (c % 2 != 0)
				{
					MargeL = insert(MargeL, FirstL->data);
					FirstL = FirstL->next;
					c++;
				}
				else
				{
					MargeL = insert(MargeL, SecondL->data);
					SecondL = SecondL->next;
					c++;
				}
			}
		}
	}
	return MargeL;
}


void transeverse(NODE *start)
{
	if (start == NULL)
	{
		printf("Linked List is empty.\n");
	}
	else
	{
		printf("The transverse is:\n");
		NODE *p = start;
		while (p != NULL)
		{
			printf("%d\n", p->data);
			p = p->next;
		}
	}
}


int main()
{
	NODE *FirstL = (NODE*)malloc(sizeof(NODE));
	NODE *SecondL = (NODE*)malloc(sizeof(NODE));
	NODE *MargeL = (NODE*)malloc(sizeof(NODE));
	FirstL = NULL;
	SecondL = NULL;
	MargeL = NULL;
	int data;
	while (1)
	{
		int n;
		printf("Enter the option:\n1)Insert In First List. \n2)Insrt In SecondList  \n3)Marge Two List.\n4)Transeverse First List\n5)Transeverse Second List\n6)Transeverse Marged List\n7)Exit\n:");
		bool flag = true;
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("Enter the data:\n");
			scanf("%d", &data);
			FirstL = insert(FirstL, data);
			break;
		case 2:
			printf("Enter the data:\n");
			scanf("%d", &data);
			SecondL = insert(SecondL, data);
			break;
		case 3:
			MargeL = margelist(FirstL, SecondL, MargeL);
			break;
		case 4: transeverse(FirstL);
			break;
		case 5: transeverse(SecondL);
			break;
		case 6: transeverse(MargeL);
			break;
		case 7:
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
