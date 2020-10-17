#include<bits/stdc++.h>
typedef long long int ll;
#define nl '\n'
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		std::vector<int> vn;
		std::vector<int> vp;
		std::vector<int> v;

		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			if (num < 0)
				vn.push_back(num);
			else
				vp.push_back(num);
		}

		v = vn;
		v.insert(v.end(), vp.begin(), vp.end());

		for (auto it = v.begin(); it != v.end(); it++)
		{
			cout << *it << " ";
		}
		cout << nl;
	}

}

/*1
9
-12 11 -13 -5 6 -7 5 -3 -6 
-12 -13 -5 -7 -3 -6 11 6 5 */

//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
