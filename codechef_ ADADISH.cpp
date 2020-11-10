#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'


int main()
{
    FAST
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int arr[n];
      int sum1=0,sum2=0;
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }

      sort(arr,arr+n);

      for(int i=n-1;i>=0;i--)
      {
         if(sum1<=sum2)
         {
            sum1+=arr[i];
         }
         else
         {
            sum2+=arr[i];
         }
         
      }

      cout<<max(sum1,sum2)<<endl;
   }
}





//https://www.codechef.com/NOV20B/submit/ADADISH
