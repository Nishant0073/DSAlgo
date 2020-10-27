#include<bits/stdc++.h>
typedef long long int ll;
#define MAX 1000000
using namespace std;

int multi(int x,int res[],int res_size)
{
    int carry=0;
    
    for(int i=0;i<res_size;i++)
    {
        int prod=(res[i]*x)+carry;
        
        res[i]=prod%10;
        carry=prod/10;
    }
    
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    
    return res_size;
}

void fact(int n)
{
    int res[MAX];
    res[0]=1;
    int res_size=1;
    
    for(int i=2;i<=n;i++)
    {
        res_size=multi(i,res,res_size);
    }
    
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }
    cout<<endl;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    fact(n);
	}
}



//https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers/0#
