#include<bits/stdc++.h>
typedef long long int ll;
#define nl '\n'
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<int>v;
	    int a[1000000]={0};
	    
	    for(int i=0;i<n;i++)
	    {
	        int num;
	        cin>>num;
	        if(a[num]!=1)
	        {
	            v.push_back(num);
	            a[num]=1;
	        }
	    }
	    
	    
	    for(int i=0;i<m;i++)
	    {
	        int num;
	        cin>>num;
	        if(a[num]!=1)
	        {
	            v.push_back(num);
	            a[num]=1;
	        }
	    }
	    
	    cout<<v.size()<<nl;
	}
}
//https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0
