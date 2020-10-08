#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define nl endl
using namespace std;




int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     ll t;
     cin >> t;
     while (t--)
     {
          ll n, k;
          cin >> n >> k;
          ll a[n];

          for (ll i = 0; i < n; i++)
          {
               cin >> a[i];
          }

          if((n-k)<k)
          {
               k=(n-k);
          }

          sort(a, a + n);

          ll summin = 0;
          ll summax = 0;

          for (ll i = 0 ;i < k; i++)
          {
               summin += a[i];
          }

          for (int i = k; i < n; i++)
          {
               summax += a[i];
          }

          cout<<summax-summin<<nl;
     }
}

//https://www.codechef.com/problems/MAXDIFF
