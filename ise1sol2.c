#include<stdio.h>
#include <stdlib.h>

typedef struct NODE Node;


struct NODE
{
	int data;
	Node *next;
};



Node* insertAtStart(int num[], int i, Node *list)
{
	Node *p = (Node*)malloc(sizeof(Node));
	p->data = num[i - 1];
	p->next = NULL;
	i--;

	if (list == NULL)
	{
		list = p;
	}

	while (i > 0)
	{
		Node *q = (Node*)malloc(sizeof(Node));
		q->data = num[i - 1];
		q->next = NULL;
		p->next = q;
		p = q;
		i--;
	}

	return list;

}

Node *insertSum(int tempsum, Node *q)
{
	if (q == NULL)
	{
		Node *p = (Node*)malloc(sizeof(Node));
		p->data = tempsum;
		p->next = NULL;
		q = p;
	}
	else
	{
		Node *p = (Node*)malloc(sizeof(Node));
		p->data = tempsum;
		p->next = NULL;
		q->next = p;
		q = p;
	}

	return q;
}

Node* addNumbers(Node *num1, Node *num2, Node *sum)
{
	int carry = 0;
	Node *q = NULL;


	while (num1 != NULL && num2 != NULL)
	{
		int tempsum = (num1->data + num2->data + carry);
		if (tempsum > 9)
		{
			carry = 1;
			tempsum = tempsum - 10;
		}
		else
		{
			carry = 0;
		}
		q = insertSum(tempsum, q);
		if (sum == NULL)
		{
			sum = q;
		}
		num1 = num1->next;
		num2 = num2->next;
	}

	if (num1 == NULL && num2 != NULL)
	{
		while (num2 != NULL)
		{
			int tempsum = (num2->data + carry);
			if (tempsum > 9)
			{
				carry = 1;
				tempsum = tempsum - 10;
			}
			else
			{
				carry = 0;
			}
			q = insertSum(tempsum, q);
			num2 = num2->next;
		}
	}



	if (num1 != NULL && num2 == NULL)
	{
		while (num1 != NULL)
		{
			int tempsum = (num1->data + carry);
			if (tempsum > 9)
			{
				carry = 1;
				tempsum = tempsum - 10;
			}
			else
			{
				carry = 0;
			}

			q = insertSum(tempsum, q);
			num1 = num1->next;


		}
	}

	if (carry == 1)
	{
		q = insertSum(carry, q);
	}

	return sum;
}

void printNumber(Node *number)
{
	while (number != NULL)
	{
		printf("%d", number->data);
		number = number->next;
	}
	printf("\n");
}

Node* reverse(Node *sum)
{
	Node *curr = sum, *next = NULL, *prev = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	sum = prev;
	return (sum);
}


int main()
{
	char snum1[5000] , snum2[5000];
	printf("Enter the first Number:\n");
	scanf("%s", &snum1);

	printf("Enter the first Number:\n");
	scanf("%s", &snum2);

	Node  *list1 = NULL, *list2 = NULL, *sum = NULL;

	int  anum1[5000], anum2[5000];

	int i = 0, j = 0;

	for (i = 0; i < 5000 && snum1[i] != '\0'; i++)
	{
		anum1[i] = snum1[i] - '0';
	}

	for (j = 0; j < 5000 && snum2[j] != '\0'; j++)
	{
		anum2[j] = snum2[j] - '0';
	}

	list1 = insertAtStart(anum1, i, list1);
	list2 = insertAtStart(anum2, j, list2);

	sum = addNumbers(list1, list2, sum);

	sum = reverse(sum);

	printf("The sum is:\n");
	printNumber(sum);
}
