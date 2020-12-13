#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#define nl endl
using namespace std;

int main() {
     string str;
     bool flag = false;
     while (getline(cin, str))
     {
          int len = str.length();
          for (int i = 0; i < len ; i++)
          {
               if (str[i] == 34)
               {
                    if (flag)
                    {
                         printf("\'\'");
                         flag = false;
                    }
                    else
                    {
                         cout << "``";
                         flag = true;
                    }
               }
               else
               {
                    cout << str[i];
               }
          }
          cout << nl;

     }
     return 0;
}

