#include <stdio.h>

int string_length(char *s);

int main(void)
{
	char *s = "hi!";
	int n = string_length(s);
	printf("length: %i\n", n);
}

int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
