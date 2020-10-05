#include<bits/stdc++.h>
#define nl endl
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int t;
     cin >> t;
     while (t--)
     {

          string str;
          cin >> str;
          int a = 0, b = 0;

          for (int i = 0; i < str.length(); i++)
          {
               if (str[i] == 'a')
                    a++;
               else
                    b++;
          }

          if (a < b)
               cout << a << nl;
          else
               cout << b << nl;

     }
     return 0;
}

//https://www.codechef.com/problems/CHN09
