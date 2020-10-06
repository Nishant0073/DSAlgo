
/* Que. Check if given expression is balanced expression or not
Given a string containing opening and closing braces, check if it represents a balanced expression or not.
For example, { [ { } { } ] } , { { [ ] } }  are balanced expressions
{ [ } ] , { { [ ] { } ] }  are not balanced expressions.*/

#include<stdio.h>
#include <stdlib.h>

int stack[100] = {0};
int start = 0;
int end = 0;


void push(char ch)
{
	stack[end] = ch;
	end++;
}

char top()
{
	return (stack[end - 1]);
}

void pop()
{
	end--;
}

bool isBal(char expr[])
{
	int i = 0;
	bool flag=true;
	while (i < 100 && expr[i] != '\0')
	{
		if (expr[i] == '{' || expr[i] == '[')
		{
			push(expr[i]);
		}
		else
		{
			char ch = top();
			pop();
			if ((ch+2) != expr[i])
				flag=false;
		}
		i++;
	}

	if(flag)
	{
		int i=0;
		int chs1left=0,chs1right=0,chs2left=0,chs2right=0;
		while(expr[i]!='\0')
		{
			if(expr[i]=='[')
				chs1left++;
			if(expr[i]==']')
				chs1right++;
			if(expr[i]=='{')
				chs2left++;
			if(expr[i]=='}')
				chs2right++;

			i++;
		}

			if(chs1left==chs1right && chs2left==chs2right )
				return true;

	}
	return false;
}
int main()
{
	char expr[100];
	printf("Enter the expression:\n");
	scanf("%s", &expr);

	bool flag = isBal(expr);
	if(flag)
		printf("Balanced.\n");
	else
		printf("Not Balanced.\n");
}

// input: {{[]{}]} output:Not Balanced.
// input: {[{}{}]} output:Balanced.
