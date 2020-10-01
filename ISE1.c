
/*
Que.

	In older personal computers, the largest integer is 32,767 and the largest long integer is
2,147,483,647. Some applications, such as cryptography and security algorithms, may require an
unbounded integer. One way to store and manipulate integers of unlimited size is by using a linked
list.
Each digit is stored in a node of the list. How we could store a five-digit number in a list. Although
the list is represented as moving from right to left, there is no physical direction in a list.
To add two numbers, we simply add the corresponding digit in the same location in their
respective lists with the carry from the previous addition. With each addition, if the sum is greater
than 10, we need to subtract 10 and set the carry to 1. Otherwise, the carry is set to 0.
Write an algorithm to add two integer lists. Design your solution so that the same logic adds the
first numbers (units position) as well as the rest of the number. In other words, do not have special
one-time logic for adding the units position.

*/
#include<stdio.h>
#include <stdlib.h>
typedef struct Node NODE;

struct Node
{
	int data;
	NODE *next;
};


//function to add addition in sum linkedlis.
NODE* insertint(NODE *root, int  num)
{
	NODE *p = (NODE*) malloc(sizeof(NODE));
	p->data = num;
	p->next = NULL;
	if (root == NULL )
	{
		root = p;
		return root;
	}

	NODE *q = (NODE*) malloc(sizeof(NODE));
	q = root;
	while (q->next != NULL)
	{
		q = q->next;
	}
	q->next = p;

	return root;
}

//function to insert the data in number1 and number 2.
NODE* insert(NODE *root, char num[], int i)
{
	NODE *p = (NODE*) malloc(sizeof(NODE));
	p->data = num[i] - '0';
	p->next = NULL;
	if (root == NULL)
	{
		root = p;
	}

	i--;
	while (num[i] != '\0')
	{
		NODE *q = (NODE*) malloc(sizeof(NODE));
		q->data = num[i] - '0';
		q->next = NULL;
		p->next = q;
		p = q;
		i--;
	}
	return root;
}
//function to add nodes data

NODE* addlists(NODE *num1, NODE *num2, NODE *sum, int carry)
{
	//if both list are null
	if (num1 == NULL && num2 == NULL)
	{
		return sum;
	}
	
	
	//if both liked list are not null
	while (num1 != NULL && num2 != NULL)
	{
		int val = num1->data + num2->data + carry;
		if (val > 9)
		{
			carry = 1;
			val = val - 10;
		}
		else
		{
			carry = 0;
		}
		sum = insertint(sum, val);
		num1 = num1->next;
		num2 = num2->next;
	}
	if (num1 == NULL && num2 != NULL)
	{
		while (num2 != NULL) {
			int val = num2->data + carry;
			if (val > 9)
			{
				carry = 1;
				val = val - 10;
			}
			else
			{
				carry = 0;
			}
			sum = insertint(sum, val);
			num2 = num2->next;
		}
		sum = addlists(num1, num2, sum, 0);
	}

	if (num2 == NULL && num1 != NULL)
	{
		while (num1 != NULL) {
			int val = num1->data + carry;
			if (val > 9)
			{
				carry = 1;
				val = val - 10;
			}
			else
			{
				carry = 0;
			}
			sum = insertint(sum, val);
			num1 = num1->next;
		}
		sum = addlists(num1, num2, sum, 0);
	}
	if (carry != 0)
	{
		sum = insertint(sum, carry);
	}

	return sum;
}


//functioin to print ans
void traverse(NODE *root)
{
	while (root != NULL)
	{
		printf("%d", root->data);
		root = root->next;
	}
}


//function to reverse the answer.
NODE* reverse(NODE *root)
{
	NODE *current = root;
	NODE *prev = NULL, *next = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return prev;
}


int main()
{
	char num1[1000], num2[1000];

	printf("Enter the First Number:\n");
	scanf("%s", &num1);
	printf("Enter the Second Number:\n");
	scanf("%s", &num2);


	NODE *lnum1 = NULL;
	NODE * lnum2 = NULL;
	NODE *sum = NULL;
	int i = 0;
	int j = 0;
	
	while (num1[i] != '\0')
		i++;
	i--;
	while (num2[j] != '\0')
		j++;

	j--;

	lnum1 = insert(lnum1, num1, i);
	lnum2 = insert(lnum2, num2, j);

	sum = addlists(lnum1, lnum2, sum, 0);
	sum = reverse(sum);

	printf("The sum of two Number is:\n");
	traverse(sum);
}


