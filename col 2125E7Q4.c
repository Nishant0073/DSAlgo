//Que. Implement infix to postfix

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[100] = {0};
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

void solve(char str[100])
{
	int n = strlen(str);
	for (int i = 0; i < n; ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
			push(str[i] - '0');

		else
		{
			int num1 = top();
			pop();
			int num2 = top();
			pop();
			switch (str[i])
			{
			case '+': push(num1 + num2); break;
			case '-': push(num2 - num1); break;
			case '*': push(num2 * num1); break;
			case '/': push(num2 / num1); break;
			}
		}
	}

	printf("%d\n",top());
}

int main()
{
	char str[100];
	scanf("%s", &str);

	solve(str);
}

// 82/     output: 4  

// 138*+   output: 25 

// 545*+5/ output: 5 
