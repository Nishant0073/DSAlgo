#include<stdio.h>
#include<stdlib.h>

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
