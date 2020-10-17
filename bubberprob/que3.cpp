#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int n;
        scanf("%d",&n);
        
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        
        int k;
        cin>>k;
        sort(a,a+n);
        cout<<a[k-1]<<endl;
    }
	
}

//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
