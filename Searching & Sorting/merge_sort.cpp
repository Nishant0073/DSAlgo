/*

The Merge Sort algorithm is a sorting algorithm that is based on the Divide and Conquer paradigm. 
In this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner.

Time Complexity: O(N log(N))
Auxiliary Space: O(n)

*/

#include<bits/stdc++.h>
using namespace std;


void merge(int a[],int l,int r,int m){
    int n1 = (m-l)+1;
    int n2 = (r-m);

    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++)
        a1[i] = a[i+l];
    for(int i=0;i<n2;i++)
        a2[i] = a[i+m+1];

    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
            a[k++] = a1[i++];
        else
            a[k++] = a2[j++];
    }

    while(i<n1)
        a[k++] = a1[i++];

    while(j<n2)
        a[k++] = a2[j++];
}
void divide(int a[],int l,int r)
{
    if(l<r)
    {
       int m = (l+r)/2;
       divide(a,l,m);
       divide(a,m+1,r);
       merge(a,l,r,m);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    divide(a,0,n-1);
    for(auto it:a)
        cout<<it<<" ";

}
