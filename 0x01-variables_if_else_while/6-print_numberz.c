#include <stdio.h>

/**
 * main - program starts at main
 *
 * Description: main function prints zero to nine
 * Return: Returns an integer zero
 */

int main(void)
{
	int a;

	a = 0;


	while (a < 10)
{
	putchar(48 + a);
	a++;
}
	putchar('\n');
	return (0);
}
