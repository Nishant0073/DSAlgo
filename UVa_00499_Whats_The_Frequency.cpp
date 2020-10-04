#include<bits/stdc++.h>
#define nl endl
using namespace std;

int main() {

     string str;
     while (getline(cin, str))
     {
          int len = str.length();
          std::map<char, int> mp;

          for (int i = 0; i < len; i++)
          {
               mp[str[i]]++;
          }

          int max = 0;
          for (auto it = mp.begin(); it != mp.end(); it++)
          {
               if (max < it->second && (it->first >= 'a' && it->first <= 'z') ||  (it->first >= 'A' && it->first <= 'Z'))
               {
                    max = it->second;
               }
          }
          string val = "";
          for (auto it = mp.begin(); it != mp.end(); it++)
          {
               if (max == it->second && (it->first >= 'a' && it->first <= 'z') ||  (it->first >= 'A' && it->first <= 'Z'))
               {
                    val += (it->first);
               }
          }
          sort(val.begin(), val.end());
          cout << val << " " << max << nl;

     }
     return 0;
}



//Que.  https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=440.
