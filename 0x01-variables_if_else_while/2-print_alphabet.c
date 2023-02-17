#include <stdio.h>
/**
 * main - marks the start of the program
 *
 * Description: main function returns alphabet in lower case
 * Return: Function returns an integer zero
 */
int main(void)

{
	char c = 'a';

	while (c <= 'z')
{		putchar(c);
		c++;
}
	putchar('\n');
	return (0);
}
