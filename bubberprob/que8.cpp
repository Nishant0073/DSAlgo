#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int solve(int a[], int n)
{
    int final_sum = INT_MIN, temp_sum = 0;
	for (int i = 0; i < n; i++)
	{
		temp_sum = temp_sum + a[i];
		if (final_sum < temp_sum)
		{
			final_sum = temp_sum;
		}

		if (temp_sum < 0)
			temp_sum = 0;
	}

	return final_sum;

}

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

		cout << solve(a, n) << endl;

	}
}

//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
