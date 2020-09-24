/*Qus.

Student Scores
Write a program to read a list of students from a file and create a list. The program should use a
linked list for implementation. Each node in the linked list should have the student’s name, a
pointer to the next student, and a pointer to a linked list of scores. There may be up to four scores
for each student.
The program should initialize the student list by reading the students’ names from the text file and
creating null score lists. It should then loop through the list, prompting the user to enter the scores
for each student. The scores’ prompt should include the name of the student.
After all scores have been entered, the program should print the scores for each student along
with score total and the average score. The average score should include only those score present.

*/
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
	char fname[100];
	char lname[100];
	Scores *scores;
	NODE *next;
};


void traverse(NODE *list)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
	while (list != NULL) {
		printf("The name of student is :  %s %s.\n", list->fname, list->lname);
		printf("The average marks of %s %s : %.2f.\n\n", list->fname, list->lname, list->scores->avg);
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");


		list = list->next;
	}
}


NODE* insert(NODE* list)
{

	FILE *users_file = fopen("text.txt", "r");
	NODE *temp = NULL;

	while (!feof(users_file))
	{
		NODE *p = (NODE*) malloc(sizeof(NODE));
		Scores *q = (Scores*) malloc(sizeof(Scores));
		fscanf(users_file, "%s %s", &p->fname, &p->lname);

		printf("Enter the mark of %s %s:\n", &p->fname, &p->lname);
		printf("Subject1:\n");
		scanf("%d", &q->sub1);

		printf("Subject2:\n");
		scanf("%d", &q->sub2);

		printf("Subject3:\n");
		scanf("%d", &q->sub3);

		printf("Subject4:\n");
		scanf("%d", &q->sub4);

		q->avg = (q->sub1 + q->sub2 + q->sub3 + q->sub4) / 4;
		p->scores = q;
		p->next = NULL;

		if (list == NULL)
		{
			list = temp = p;
		}
		else
		{
			temp->next = p;
			temp = temp->next;
		}
	}


	return list;
}

int main()
{
	NODE *list = NULL;

	list = insert(list);
	traverse(list);
	printf("\n");
}

/*ise(master*) » ./a.out

Enter the mark of NISHANT SHINGATE:
Subject1:
87
Subject2:
77
Subject3:
90
Subject4:
66
Enter the mark of RAM MORE:
Subject1:
88
Subject2:
90
Subject3:
99
Subject4:
76
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

The name of student is :  NISHANT SHINGATE.
The average marks of NISHANT SHINGATE : 80.00.

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

The name of student is :  RAM MORE.
The average marks of RAM MORE : 88.00.

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++




text.txt file:

NISHANT SHINGATE
RAM MORE

*/
