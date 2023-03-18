#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
	float regular, sale;
	int percent_off;

	printf("Regular Price: ");
	scanf("%f", &regular);

	printf("Percent off: ");
	scanf("%d", &percent_off);

	sale = discount(regular, percent_off);
	printf("Sale Price: %.2f\n", sale);
}


float discount(float price, int percentage)
{
	return (price * (100 - percentage)/100);
}
