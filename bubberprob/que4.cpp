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
		std::vector<int> v;
		int c0 = 0, c1 = 0, c2 = 0;

		for (int i = 0; i < n; i++)
		{
		    
			int num;
			cin >> num;
			if (num == 0)
				c0++;
			else if (num == 1)
				c1++;
			else
				c2++;
				
		}

		for (int i = 0; i < c0; i++)
		{
			cout << 0<<" ";
		}
		for (int i = 0; i < c1; i++)
		{
			cout << 1<<" ";
		}
		for (int i = 0; i < c2; i++)
		{
			cout << 2<<" ";
		}
		cout << nl;


	}

}
//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
