#include<bits/stdc++.h>
#define nl '\n'
typedef long long int ll;
using namespace std;

int gcd(ll a, ll b)
{
	if (b == 0)
		return a;

	return (gcd(b, a % b));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}

		for(ll i=0;i<n-1;i++)
		{
			a[i+1]=gcd(a[i],a[i+1]);
		}

		cout<<a[n-1]<<nl;
	}
}

//https://www.codechef.com/problems/AMSGAME1
