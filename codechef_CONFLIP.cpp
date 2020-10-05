#include<bits/stdc++.h>
#define nl endl
typedef long long int ll;
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     ll t;
     cin >> t;
     while (t--)
     {
          int t1;
          cin >> t1;
          while (t1--)
          {
               int i, g, q;
               cin >> i >> g >> q;

               if (g % 2 != 0)
               {
                    if (i == q)
                    {
                         cout << (g / 2) << nl;
                    }
                    else
                    {
                         cout << (g / 2) + 1 << nl;
                    }
               }
               else
               {
                    cout << (g / 2) << nl;
               }
          }


     }
     return 0;
}

//https://www.codechef.com/LRNDSA01/problems/CONFLIP
