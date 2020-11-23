/*
ISE2
Compute F(M, N)
where F(M, N) can be recursively defined as:
F(M,N) = 1 if M=0 or M≥N≥1 and
F(M,N) = F(M–1,N) + F(M–1, N–1), otherwise*/

#include<stdio.h>
int f(int m, int n)
{
	if (m == 0 || (m>=n && n>=1)
	{
		return 1;
	}

	return (f(m - 1, n) + f(m - 1, n - 1));
}

int main()
{
	int m, n;
	printf("Enter the value of M and N:\n");
	scanf("%d %d", &m, &n);
	int num = f(m, n);
	printf("%d\n", num);
}
