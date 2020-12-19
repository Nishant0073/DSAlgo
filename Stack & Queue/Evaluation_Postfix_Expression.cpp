//GFG  https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1/?category[]=Stack&page=1&query=category[]Stackpage1#

// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{
    // Your code here
     stack<int>s;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            s.push((str[i]-'0'));
        }
        else
        {
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                if(str[i]=='*')
                {
                    num2=(num2*num1);
                }
                else if(str[i]=='-')
                {
                    num2=(num2-num1);
                }
                else if(str[i]=='/')
                {
                    num2=(num2/num1);
                }
                else
                {
                    num2=num2+num1;
                }
                s.push(num2);
           
        }
    }
	  int ans=s.top();
        return ans;
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
    
    cout<<evaluatePostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
