#include<stdio.h>
#include<stdlib.h>

/*

QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot
and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

The key process in quickSort is a partition(). The target of partitions is to place the pivot (any element can be chosen
to be a pivot) at its correct position in the sorted array and put all smaller elements to the left of the pivot, and all
greater elements to the right of the pivot.

 O(N * logN):

*/


int partition(int arr[],int l,int r)
{
  int pivote = arr[r];
  int i=l-1;

  for(int j=l;j<r;j++)
  {
    if(arr[j]<pivote)
    {
      i++;
      int t = arr[i];
      arr[i] = arr[j];
      arr[j] = t;
    }
  }

    int t = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = t;

   return (i+1);
}

void quick_sort(int arr[],int l,int r)
{
  if(l<r)
  {
    int pi = partition(arr,l,r);
    quick_sort(arr,l,pi-1);
    quick_sort(arr,pi+1,r);
  }

}


int main()
{
  int arr[] = {2,3,1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    quick_sort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\n");
}
