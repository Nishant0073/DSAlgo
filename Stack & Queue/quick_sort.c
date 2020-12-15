//Quick sort in c

#include<stdio.h>
#include<stdlib.h>

int parttion(int arr[],int l,int h)
{
	int pivot = arr[h];
	int i = (l-1);

	for(int j=l; j <=h-1 ; j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}

	int temp=arr[i+1];
	arr[i+1]=arr[h];
	arr[h]=temp;

	return (i+1);
}

void quick_sort(int arr[],int l,int r)
{
	if(l < r)
	{
		int pi =  parttion(arr, l, r);
		quick_sort(arr,l,pi-1);
		quick_sort(arr,pi+1,r);
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

	quick_sort(arr,0,n-1);

	printf("The array after sorting is: ");

	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

