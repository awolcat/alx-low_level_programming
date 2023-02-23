#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print n lines
 * @n: int that controls no of lines
 *
 * Description: print n lines
 * Return: nothing
 */
void print_diagonal(int n)

{
	int i;
	int space;

	for (i = 0; i < n; i++)
{
	if (n > 0)
{
		for (space = 0; space < i; space++)
{
			_putchar(' ');
}
			_putchar (92);

}

	_putchar('\n');
}
	if (n <= 0)
	_putchar ('\n');
}
