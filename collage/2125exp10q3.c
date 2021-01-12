/*
Roll No : 2125
Div.    : B (SYCSE)

Que. : Hashing implimentation.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game()
{
	int start, end;
	printf("Enter the range to gess number:\n");
	scanf("%d", &start);
	scanf("%d", &end);


	int gesnumber;
	printf("Enter the Guessed Number:\n");
	scanf("%d", &gesnumber);
	int gen = (rand() % (start - end + 1)) + start;

	if (gesnumber != gen)
	{
		printf("Sorry,You had not guessed correct number\n");
	}
	else
	{
		printf("Congrates, You have guessed correct number.....!!!\n");
	}
}


int main()
{
	srand(time(0));
	printf("....Welcome to number guessing game....\n");
	game();
}