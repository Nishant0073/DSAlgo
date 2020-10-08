#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define nl endl
using namespace std;




int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
     int t;
     cin >> t;
     while (t--)
     {
          ll n;
          cin >> n ;
          string str;
          cin>>str;
          ll cnt = 0;

          for(ll i=0;i<str.length();i++)
          {
              if(str[i]=='1')
              {
                  cnt++;
              }
          }
          cout << ((cnt*(cnt+1))/2) << nl;

     }
}


//https://www.codechef.com/viewsolution/38721099
