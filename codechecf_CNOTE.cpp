#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define nl endl

using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     ll t;
     cin >> t;
     while (t--)
     {
          ll total_pages, used_pages, avi_amount, no_books;
          cin >> total_pages >> used_pages >> avi_amount >> no_books;

          ll rem_page = total_pages - used_pages;

          string ans="UnluckyChef";

          for (ll i = 0; i < no_books; i++)
          {
               ll book_pages,book_price;
               cin>>book_pages>>book_price;

               if(book_pages>=rem_page && book_price<=avi_amount)
               {
                  ans="LuckyChef";
                  break;
               }
          }

       cout<<ans<<nl;

     }
}


//https://www.codechef.com/problems/CNOTE
