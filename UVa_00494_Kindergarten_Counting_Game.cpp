#include<bits/stdc++.h>
#define nl endl
using namespace std;

int main() {
     string str;
     while (getline(cin, str))
     {
          int len = str.length();
          int count = 0;
          int flag = 0;

          for (int i = 0; i < len; i++)
          {
               if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
               {
                    flag = 1;
               }
               else
               {
                    count += flag;
                    flag = 0;
               }
          }
          count += flag;
          cout << count << nl;

     }
     return 0;
}

