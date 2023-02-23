#include <stdio.h>
#include "main.h"

/**
 * print_line - print n lines
 * @n: int that controls no of lines
 *
 * Description: print n lines
 * Return: nothing
 */
void print_line(int n)

{
	int i;

	for (i = 0; i <= n; i++)
{
		if (n > 0)
		_putchar ('_');
}

		_putchar ('\n');
}
