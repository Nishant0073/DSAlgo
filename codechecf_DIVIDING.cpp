#include<bits/stdc++.h>
#define nl '\n'
typedef long long int ll;
using namespace std;


int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     ll n;
     cin >> n;
     ll sum_n = ((n * (n + 1)) / 2);
     ll sum_all = 0;

     for (ll i = 0; i < n; i++)
     {
          int num;
          cin >> num;
          sum_all += num;
     }
     if (sum_all == sum_n)
          cout << "YES" << nl;
     else
          cout << "NO" << nl;


}
//https://www.codechef.com/problems/DIVIDING
