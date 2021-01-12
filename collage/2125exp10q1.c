/*
Roll No : 2125
Div.    : B (SYCSE)

Que. :
 Build a Number guessing game, in which the user selects a range.

Let’s say User selected a range, i.e., from A to B, where A and B belong to Integer.
Some random integer will be selected by the system and the user has to guess that integer in the minimum number of guesses
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void numberGuss(int l,int u)
{
	for(int i=0;i<1;i++)int gn=("%d\n",((rand()%(u-l+1))+l) );
	int ugn;
	printf("%d\n",gn);
	printf("%s\n","Enter the guessed number:" );
	scanf("%d",&ugn);

	if(ugn==gn)
	{
		printf("Congrats !!! You guessed the correct Number.\n");
	}
	else
	{
		printf("Sorry , You are not guessed the  correct numberGuss ,try again....\n");
	}

}

int main()
{
	

		printf("..........Welcome to Number Guessing Game............\n");

		
			int l,u;
			printf("Enter the lower and upper range to guess number:\n");
			scanf("%d",&l);
			scanf("%d",&u);

			numberGuss(l,u);


}