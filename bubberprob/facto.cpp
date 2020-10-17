#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define max 100000
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[max];
    //set all array to -1;
		fill(a, a + max, -1);

		int end = 0, carry = 0;
		a[0] = 1;

		for (int i = 2; i <= n; i++)
		{
			for (int j = 0; j <= end; j++)
			{
				int mul = (a[j] * i) + carry;
				a[j] = mul % 10;
				carry = mul / 10;
			}

			while (carry != 0) {
				a[++end] = carry % 10;
				carry = carry / 10;
			}
		}

		for (int i = end; i >= 0; i--)
		{
			cout << a[i];
		}
		cout << nl;
	}
}

/*Explanation we are taking array to save our output and we are numltiplaying array and number in such way:

let a[0]=1 a=[1][-1][-1]......

-->f(2)=2*1   
  by using school multiplication method :
    2
  x 1
  ---
    2
  then we push this in array
  a[0]=2;
  
-->f(3)=3*2   
  by using school multiplication method :
    3
  x 2
  ---
    6
    then we push this in array
    a[0]=6;
-->f(4)=4*6
    by using school multiplication method :
      6
    x 4
    ---
      24
      
      then we push this in array in way:
      a[0]=24%10;  a[0]=4;
      carry=24/10;  carry=2;
      a[1]=2;
      a=[4][2];
      */
      
      
      

  
