#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cout << endl;
	while (t--)
	{
		string str;
		cin >> str;

		int ans = (((str[0] - '0') - 1) * 10);
		int n = str.length();
		ans += ((n * (n + 1)) / 2);

		cout << ans << endl;
	}
}

//https://codeforces.com/contest/1433/problem/A
