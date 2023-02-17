#include <stdio.h>

/**
 * main - marks start of program
 *
 * Description: function returns lower case alphabet except q and e
 * Return: returns integer zero
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')

{
	if ((c != 'q') && (c != 'e'))
	putchar(c);
	c++;

}
	putchar('\n');
	return (0);
}
