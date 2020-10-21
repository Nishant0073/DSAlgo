#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cout << endl;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		int conl = 0, conr = 0, le = 0, re = 0;
		int con1 = 0;

		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			if (num == 1)
			{
				if (con1 == 0)
					le = i;
				con1++;
			}

			a[i] = num;
		}

		for (int i = n - 1; i >= 0; i--)
		{
			if (a[i] == 1)
			{
				re = i;
				break;
			}
		}

		int cont = 0;

		for (int i = le; i < re; i++)
		{
			if (a[i] == 0)
				cont++;
		}

		cout << cont << endl;


	}
}


//https://codeforces.com/contest/1433/problem/B
