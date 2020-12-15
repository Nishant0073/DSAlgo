//Linear Search in c
//Code by Nishant_0073(Nishant Shingate)
#include<stdio.h>
#include<stdlib.h>
typedef struct NODE Node;

int search(int arr[],int key,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return (i);
		}
	}

	return -1;
}

int main()
{
	int n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int arr[n];

    printf("Enter the elements in array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int key;
	printf("Enter the element to be find:\n");
	scanf("%d",&key);

	int isFound=search(arr,key,n);

	if(isFound==-1)
	{
		printf("%d is not found in array.\n", key);
	}
	else
	{
		printf("%d is found at index %d.\n",key,isFound);
	}


}
