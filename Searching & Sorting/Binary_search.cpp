/*

Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half.
The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). 

Binary Search Algorithm can be implemented in the following two ways
1.Iterative Method
2.Recursive Method

1.Iterative Method:
	Time Complexity: O (log n)
	Auxiliary Space: O (1)

2.Recursive Method
	Time Complexity: O(log n)
	Auxiliary Space: O(log n)
	
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

    int k;
    cin>>k;
    
    sort(a,a+n);
    int l = 0,r = n-1;
    while(l<=r)
    {
        int m = (l+r)/2;
        if(a[m]==k)
        {
            cout<<m<<endl;
            return 0;
        }
        if(a[m]<k)
            l=m+1;
        else
            r=m-1;;
    }
    cout<<-1<<endl;
}
