//Bubble sort in c
//Code by Nishant_0073(Nishant Shingate)
//sorting the array by comparing to selected elements  in array.
#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[],int n)
{
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        if(arr[j]>arr[i])
                        {
                                int temp = arr[j];
                                arr[j] = arr[i];
                                arr[i]=temp;
                        }
                }
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

        bubble_sort(arr,n);
}
