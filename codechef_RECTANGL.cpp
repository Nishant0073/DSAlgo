#include<bits/stdc++.h>
#define nl endl
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int t;
     cin >> t;
     while (t--) {
          int a[4];
          int n = 4;
          for (int i = 0; i < n; i++)
               cin >> a[i];

          sort(a, a + n);
          if (a[0] == a[1] && a[2] == a[3])
          {
               cout << "YES" << nl;
          }
          else
          {
               cout << "NO" << nl;
          }

     }
     return 0;
}

