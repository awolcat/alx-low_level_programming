#include <stdio.h>

/**
 * main - program starts at main
 *
 * Description: main function prints zero to nine
 * Return: Returns an integer zero
 */

int main(void)
{
	char a;

	a = 48;


	while (a < 58)
{
	putchar(a);
	a++;
}
	putchar('\n');
	return (0);
}
