#include<bits/stdc++.h>
typedef long long int ll;
#define nl endl
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n=str.length();
        int start=0,end=n-1;
        while(start<end)
        {
            swap(str[start],str[end]);
            start++;
            end--;
        }
        
        cout<<str<<nl;
    }

}
//https://practice.geeksforgeeks.org/problems/reverse-the-string/0
