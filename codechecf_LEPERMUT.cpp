#include<bits/stdc++.h>
#define nl '\n'
typedef long long int ll;
using namespace std;


int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin >> t;
     while (t--)
     {
          int n;
          cin >> n;
          int u = 0, l = 0;
          int a[n];
          bool flag = false;
          for (int i = 0; i < n; ++i)
          {
               cin >> a[i];
          }
          if (n == 1)
          {
               flag = true;
          }
          else
          {

               for (int i = 0; i < n; i++)
               {
                    for (int j = i + 1; j < n; j++)
                    {
                         if (a[i] > a[j])
                         {
                              u++;
                         }
                    }
               }

               for (int i = 0; i < n - 1; i++)
               {
                    if (a[i] > a[i + 1])
                    {
                         l++;
                    }
               }
               if (l == u)
                    flag = true;
          }

          if (flag)
               cout << "YES" << nl;
          else
               cout << "NO" << nl;
     }
}


//https://www.codechef.com/problems/LEPERMUT
