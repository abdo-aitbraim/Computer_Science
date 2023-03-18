#include <stdio.h>

int main(void)
{
	float Average;
	int n;

	printf("What is the number of scores? ");
        scanf("%i", &n);

	int scores[n], i, sum;

	i = 0;
	sum = 0;
	while (i < n)
	{
		printf("score %i : ", i + 1);
		scanf("%i", &scores[i]);
		sum = sum + scores[i];
		i++;
	}

	Average = (float)  sum / n;
	printf("Average: %.2f\n", Average);
}
