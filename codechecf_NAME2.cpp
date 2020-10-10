#include<bits/stdc++.h>
#define nl '\n'
typedef long long int ll;
using namespace std;

bool isyes(string big, string small)
{
	int i = 0, j = 0;
	int count = 0;
	while (i < big.length() && j < small.length())
	{
		if (big[i] == small[j])
		{
			i++;
			j++;
			count++;
		}
		else
		{
			i++;
		}
	}
	if (count == small.length())
		return true;
	else
		return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		string str1, str2;
		cin >> str1 >> str2;
		if (str2.length() > str1.length())
		{
			swap(str1, str2);
		}


		if (isyes(str1, str2))
			cout << "YES" << nl;
		else
			cout << "NO" << nl;
	}
}
//https://www.codechef.com/problems/NAME2
