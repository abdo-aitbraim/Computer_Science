#include <stdio.h>

int main(void)
{
	int i, n, j;

	do
	{
		printf("Size: ");
		scanf("%d", &n);
	}
	while (n < 1);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

/*void meow(int n);

int main(void)
{
	meow(4);
}


void meow(int n)
{
        char c;
        int counter = 0;

//      printf("choise the loop\n.inter 'w' for while and 'f' for for>
//      scanf("%c", &c);

        while (counter < n)
        {
                printf("meow\n");
                counter ++;
        }
}
*/
