#include<bits/stdc++.h>
#define nl '\n'
typedef long long int ll;
using namespace std;


int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int n1, n2, n3;
     cin >> n1 >> n2 >> n3;

     int n = n1 + n2 + n3;
     int a[n];
     for (int i = 0; i < n; i++)
     {
          cin >> a[i];
     }

     std::map<int, int> mp;

     for (int i = 0; i < n; i++)
     {
          mp[a[i]]++;
     }

     std::vector<int> v;
     for (auto it = mp.begin(); it != mp.end(); it++)
     {
          if (it->second >= 2)
               v.push_back(it->first);
     }

     cout << v.size() << nl;

     for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
     {
          cout << *i << nl;
     }
}


//https://www.codechef.com/problems/VOTERS
