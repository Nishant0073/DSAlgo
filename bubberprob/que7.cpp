#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		vector<int>v;
		for (int i = 0; i < n - 1; i++)
		{
			int num;
			cin >> num;
			v.push_back(num);
		}
		int last;
		cin >> last;
		v.insert(v.begin(), last);
		for (auto it = v.begin(); it != v.end(); it++)
		{
			cout << *it << " ";
		}

		cout << '\n';
	}
}

//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0
