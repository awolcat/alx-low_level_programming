#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_array - print n elements of an array
 * @n: number of elements to print
 * @a: array
 * Description: print n elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(*(a + i));

		if (i < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
