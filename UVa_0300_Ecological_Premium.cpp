#include<bits/stdc++.h>
#define nl endl
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int t;
     cin>>t;
     while (t--) {
          int n;
          cin >> n;
          int sum = 0;
          for (int i = 0; i < n; i++)
          {
               int a, b, c;
               cin >> a >> b >> c;
               sum += (a * c);
          }
          cout << sum << nl;
     }
     return 0;
}

