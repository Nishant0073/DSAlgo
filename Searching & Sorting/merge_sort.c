//Merge sort in c

#include<stdio.h>
#include<stdlib.h>


void merge(int arr[],int l,int mid,int r)
{
	int n1=(mid-l)+1;
	int n2=(r-mid);
	int arr1[n1];
	int arr2[n2];

	for(int i=0;i<n1;i++)
	{
		arr1[i] = arr[l+i];
	}

	for(int i=0;i<n2;i++)
	{
		arr2[i]= arr[mid+i+1];
	}

	int i=0;
	int j=0;
	int k=l;

	while(i<n1 && j<n2)
	{
		if(arr1[i]<arr2[j])
		{
			arr[k]=arr1[i];
			k++;i++;
		}
		else
		{
			arr[k]=arr2[j];
			k++;j++;
		}
	}

	while(i<n1)
	{
		arr[k]=arr1[i];
		i++;
		k++;
	}

	while(j<n2)
	{
		arr[k]=arr2[j];
		j++;
		k++;
	}
}

void Merge_sort(int arr[],int l,int r)
{
	if (l>=r)
	{
		return;
	}
		int mid= l + ((r-l)/2);
		Merge_sort(arr,l,mid);
		Merge_sort(arr,mid+1,r);

		merge(arr,l,mid,r);
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

	Merge_sort(arr,0,n-1);

	printf("The array after sorting is: ");

	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

