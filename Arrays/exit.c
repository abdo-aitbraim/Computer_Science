#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Missing\n");
		return (1);
	}
	printf("hello, %s\n", argv[1]);
	return (0);
}
