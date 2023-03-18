#include <stdio.h>
//#include <cs50.h>
int main(void)
{
	char name[20];
	//string name = get_string("what's your name? ");
	scanf("%s", name);
	printf("hello, %s\n", name);
}
