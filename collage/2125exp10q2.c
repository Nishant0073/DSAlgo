/*
Roll No : 2125
Div.    : B (SYCSE)

Que. : linear serach implimentation.*/

#include<stdio.h>
#include<stdlib.h>

void linear_search(int n, int arr[])
{
	int key;
	printf("Enter the elements to find in array:\n");
	scanf("%d", &key);

	int index = -1;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			index = i;
		}
	}

	if (index != -1)
		printf("The element %d is present at index %d  in array.\n", key, index );
	else
		printf("The element %d is not present in array.\n", key);
}

int main()
{
	int n;
	printf("Enter the size of array: \n");
	scanf(" %d", &n);
	int arr[n];
	printf("Enter the elements in array:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}

	linear_search(n, arr);

}
