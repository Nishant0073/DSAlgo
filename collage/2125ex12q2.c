//sub.          : Data Structure
//Div.          : B (SYCSE)
//Batch 		: B2
//Roll No.      : 2125 (19131083)
//Practical No. : 12
//Que. No.      : 2
//Que.          : Program to implement Quick Sort

#include<stdio.h> 
  

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++) 
    { 
      
        if (arr[j] < pivot) 
        { 
            i++;   
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
void quicksort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
      
        int pi = partition(arr, low, high); 
 
        quicksort(arr, low, pi - 1); 
        quicksort(arr, pi + 1, high); 
    } 
} 
  

int main() 
{ 
    int  n;
    printf("++++++ Program to implement Quick Sort. ++++++\n");
	printf("%s\n","Enter the size of array:" );
	scanf("%d",&n);

	int arr[n];
	printf("Enter the element in array:\n");

	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i])	;
	}

	 quickSort(arr, 0, n-1); 

	printf("The sorted array is : \n");

	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
} 
