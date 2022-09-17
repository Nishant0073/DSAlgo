
/*
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order)
from the unsorted part and putting it at the beginning. 

The algorithm maintains two subarrays in a given array.

The subarray which already sorted. 
The remaining subarray was unsorted.
In every iteration of the selection sort, the minimum element (considering ascending order) 
from the unsorted subarray is picked and moved to the sorted subarray. 

Complexity Analysis of Selection Sort:
Time Complexity:  O(N2)  
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
        int curMin = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[curMin])
                curMin = j;
        }
        swap(a[i],a[curMin]);
    }

    for(auto it:a)
        cout<<it<<" ";
    cout<<endl;
}

