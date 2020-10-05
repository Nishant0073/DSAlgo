#include<bits/stdc++.h>
#define nl endl
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int t;
     cin >> t;
     while (t--) {

          string str1, str2;
          cin >> str1 >> str2;

          bool flag = true;

          for (int i = 0; i < str1.length(); i++)
          {
               if (str1[i] != str2[i])
               {
                    if (str1[i] != '?' && str2[i] != '?' )
                    {
                         flag = false;
                         break;
                    }
               }
          }

          if (flag)
               cout << "Yes" << nl;
          else
               cout << "No" << nl;
     }
     return 0;
}

//https://www.codechef.com/problems/TWOSTR
