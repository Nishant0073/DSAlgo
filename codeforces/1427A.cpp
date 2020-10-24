#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nl '\n'

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}

		if (sum == 0)
		{
			cout << "NO" << nl;
		}
		else if (sum > 0)
		{
			cout << "YES" << nl;
			sort(a, a + n, greater<int>());

			for (int i = 0; i < n; i++)
				cout << a[i] << " ";

			cout << nl;
		}
		else
		{
			cout << "YES" << nl;
			sort(a, a + n);

			for (int i = 0; i < n; i++)
				cout << a[i] << " ";

			cout << nl;
		}
	}
}

//https://codeforces.com/contest/1427/problem/A
