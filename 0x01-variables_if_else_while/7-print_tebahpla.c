#include <stdio.h>

/**
 * main - marks start of the program
 *
 * Description: print alphabet in reverse
 * Return: Return an integer zero
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
{
	putchar(c);
	c--;
}
	putchar('\n');
	return (0);
}
