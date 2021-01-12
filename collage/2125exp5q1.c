//sub.          : Data Structure
//Div.          : B (SYCSE)
//Batch 		: B2
//Roll No.      : 2125 (19131083)
//Practical No. : 5
//Que. No.      : 1

/* Que. Program for counting number of occurrences of a given element in given linked list.*/

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
NODE*  insert(NODE *root, int data)
{
	if (root == NULL)
	{
		NODE *p = (NODE*)malloc(sizeof(NODE));
		p->data = data;
		p->next = NULL;
		root = p;
		return root;
	}
	else
	{

		NODE *p = (NODE*)malloc(sizeof(NODE));
		p->data = data;
		p->next = NULL;

		NODE *q = (NODE*)malloc(sizeof(NODE));
		q = root;
		while (q->next != NULL)
		{
			q = q->next;
		}
		q->next = p;
	}
	return root;
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

void contele(int data, NODE *root)
{
	int count = 0;
	while (root != NULL )
	{
		if (data == root->data)
			count++;

		root = root->next;
	}

	printf("Occurrences of %d in Linked List is : %d \n", data, count);
}


int main()
{
	NODE *List = (NODE*)malloc(sizeof(NODE));
	List = NULL;
	int data;
	while (1)
	{
		int n;
		printf("Enter the option:\n1)Insert the element in Linked List.\n2)Count the element.\n3)transverse List.\n4)Exit\n:");
		bool flag = true;
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("Enter the data:\n");
			scanf("%d", &data);
			List = insert(List, data);
			break;

		case 2:
			printf("Enter the element which have to Count:\n");
			scanf("%d", &data);
			contele(data, List);
			break;

		case 3: transeverse(List);
			break;

		case 4:
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