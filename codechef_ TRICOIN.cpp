#include<bits/stdc++.h>
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

          int n, val = 1;
          cin >> n;

          for (int i = 1; i < INT_MAX; ++i)
          {
               int temp = (i * (i + 1)) / 2;

               if (temp <= n)
                    val = i;
               else
                    break;
          }

          cout << val << nl;
     }
     return 0;
}

//https://www.codechef.com/problems/TRICOIN
