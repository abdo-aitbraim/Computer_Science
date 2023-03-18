#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, n = 10;
	char s[n];

	printf("Before: ");
	scanf("%s", s);

	printf("AAfter: ");
	for (i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			printf("%c", s[i] - 32);
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");
}
