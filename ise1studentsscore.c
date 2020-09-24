#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node NODE;
typedef struct Scores Scores;

struct Scores
{
	int sub1, sub2, sub3, sub4;
	float avg;

};

struct Node
{
	char name[100];
	Scores *scores;
	NODE *next;
};


void traverse(NODE *list)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
	while (list != NULL) {
		printf("The name of student is :  %s.\n", list->name);
		printf("The average marks of %s student : %.2f.\n\n", list->name, list->scores->avg);
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");


		list = list->next;
	}
}


NODE* insert(NODE* list)
{
	NODE *p = (NODE*) malloc(sizeof(NODE));
	Scores *q = (Scores*) malloc(sizeof(Scores));
	printf("Enter student name:\n");
	scanf("%s", &p->name);
	printf("Enter the marks of Subject1:\n");
	scanf("%d", &q->sub1);

	printf("Enter the marks of Subject2:\n");
	scanf("%d", &q->sub2);

	printf("Enter the marks of Subject3:\n");
	scanf("%d", &q->sub3);

	printf("Enter the marks of Subject4:\n");
	scanf("%d", &q->sub4);

	q->avg = (q->sub1 + q->sub2 + q->sub3 + q->sub4) / 4;
	p->scores = q;
	p->next = NULL;

	if (list == NULL)
	{
		return p;
	}
	else
	{
		NODE *temp = list;
		while (temp->next != NULL) {
			temp = temp->next;
		}

		temp->next = p;
	}
	return list;
}

int main()
{
	NODE *list = NULL;

	while (1) {
		bool flag = false;
		int n;
		printf("Enter the option:\n1)Add student information.\n2)Print student information.\n3)Exit\n:");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			list = insert(list);
			break;
		case 2:
			traverse(list);
			break;
		case 3:
			flag = true;
			break;
		}
		if (flag)
			break;

		printf("\n");
	}
}