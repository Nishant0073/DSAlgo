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

		for (int i = 0; i < n; i++)
			cin >> a[i];

		int index = -2;
		int max_e = *max_element(a, a + n);

		for (int i = 0; i < n; i++)
		{
			if (max_e == a[i])
			{
				if (i == 0)
				{
					if (a[i + 1] < a[i])
					{
						index = i;
						break;
					}
				}
				else if (i == n - 1)
				{
					if (a[i - 1] < a[i])
					{
						index = i;
						break;
					}
				}
				else
				{
					if (a[i - 1] < a[i] || a[i + 1] < a[i])
					{
						index = i;
						break;
					}
				}
			}
		}
		cout << index + 1 << nl;
	}
}

//https://codeforces.com/problemset/problem/1433/C
