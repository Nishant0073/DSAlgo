//Que. Implement infix to prefix

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[100] = {0};
int start = 0;
int end = 0;


void push(char ch)
{
	if (end == 100)
	{
		printf("Stack is Full.\n");
	}
	else
	{
		stack[end] = ch;
		end++;
	}
}



char top()
{
	if (end == 0)
	{
		return ('E');
	}
	else
	{
		return (stack[end - 1]);
	}

}



void pop()
{
	end--;
}

int order(char ch)
{
	if (ch == '^')
		return 3;
	else if (ch == '*' || ch == '/')
		return 2;
	else if (ch == '+' || ch == '-')
		return 1;
	else
		return -1;
}

void prefix(char ans[100])
{
	int  n=strlen(ans);
	for(int i=n-1;i>=0;i--)
		printf("%c",ans[i] );

	printf("\n");
}


void solve(char str[])
{
	char ans[100];
	int j = 0;
	int i = 0;
	while (str[i] != 'E' && i < 100)
	{
		if (str[i] >= '0' && str[i] <= '9' || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			ans[j] = str[i];
			j++;
		}
		else if (str[i] == '(')
		{
			push('(');
		}
		else if (str[i] == ')')
		{
			while (top() != 'E' && top() != '(')
			{
				ans[j] = top();
				pop();
				j++;
			}
			if (top() == '(')
				pop();
		}
		else
		{
			while (top() != 'E' && order(str[i]) <= order(top()))
			{
				ans[j] = top();
				pop();
				j++;
			}
			push(str[i]);
		}
		i++;
	}

	while (top() != 'E')
	{
		ans [j]= top();
		pop();
		j++;
	}

	prefix(ans);
}


void reverse(char str1[100])
{
	char str2[100];
	int n=strlen(str1);
	int j=0;
	for(int i=n-1;i>=0;i--)
	{
		if(str1[i]=='(')
		{
			str2[j]=')';
		}
		else if(str1[i]==')')
		{
			str2[j]='(';
		}
		else
		{
			str2[j]=str1[i];
		}
		j++;
	}

	solve(str2);

}
int main()
{
	char str[100];
	scanf("%s", &str);

	reverse(str);
}



//(A+B)*(C+D)  output: *+AB+CD
//A*B+C*D      output: +*AB*CD
//A+B*C+D      output: +A+*BCD

