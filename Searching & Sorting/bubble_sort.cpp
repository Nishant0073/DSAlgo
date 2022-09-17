//Bubble sort in c

/*

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
In each outer for loop we bring the smallest element from remaining array to initial position.

Time Complexity: O(N2)
Auxiliary Space: O(1) 
        
 */


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }

    for(auto it:a)
        cout<<it<<" ";
    cout<<endl;
}

