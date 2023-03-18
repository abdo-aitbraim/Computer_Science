#include <stdio.h>
#include <cs50.h>
int main(void)
{
	int points;
	const int MINE = 2;

	printf("How many points did you lose? ");
	scanf("%d", &points);

	if (points < MINE)
	{
		printf("You lost fwer points than me. \n");
	}
	else if (points > MINE)
	{
		printf("you lost more points than me. \n");
	}
	else
	{
		printf("You lost the same points as me. ");
	}
}
