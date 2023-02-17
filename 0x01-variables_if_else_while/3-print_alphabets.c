#include <stdio.h>
/**
 * main - marks the start of the program
 *
 * Description: main function returns alphabet
 * in lower case
 * Return: Function returns an integer zero
 */
int main(void)

{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
{
	putchar(c);
	c++;
}
	while (C <= 'Z')
{
	putchar(C);
	C++;
}
	putchar('\n');
	return (0);
}
