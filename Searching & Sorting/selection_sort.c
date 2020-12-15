//Selection sort in c
//Code by Nishant_0073(Nishant Shingate)
//Sorting the array by moving the small element to to left to selectd area.
#include<stdio.h>
#include<stdlib.h>



void selection_sort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int min= i ;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min] > arr[j])
			{
				min=j;
			}
		}

		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}

	printf("The array after sorting is: ");

	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}


int main()
{
	int n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);

	printf("Enter the Elements in array:\n");
	int arr[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	selection_sort(arr,n);
}

