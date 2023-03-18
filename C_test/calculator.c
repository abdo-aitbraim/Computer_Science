#include <stdio.h>

int main(void)
{
	float x, y, z;

	printf("x: ");
	scanf("%f", &x);

	printf("y: ");
	scanf("%f", &y);

	z = x / y;
	printf("sum: %.6f\n", z);
}
