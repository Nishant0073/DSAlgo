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
          ll n;
          cin >> n;
          ll a[n];
          for (int i = 0; i < n; i++)
               cin >> a[i];

          ll cost = *(min_element(a, a + n)) * (n - 1);
          cout << cost << nl;


     }
     return 0;
}


//https://www.codechef.com/problems/MNMX
