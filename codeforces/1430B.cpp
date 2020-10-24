#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve(ll n, ll k, ll a[])
{

	sort(a, a + n);
	ll ans = 0;

	ll i = n - 1;

	while (k >= 0 && i >= 0)
	{
		ans += a[i];
		i--;
		k--;
	}

	cout << ans << endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll a[n];

		for (ll i = 0; i < n; i++)
			cin >> a[i];

		solve(n, k, a);
	}

}

//https://codeforces.com/problemset/problem/1430/B
