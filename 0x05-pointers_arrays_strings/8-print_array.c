#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_array - print n elements of an array
 * @n: number of elements to print
 * @array: array
 * Description: print n elements
 * Return: void
 */
void print_array(int *array, int n)
{
	int i;
	int p;

	p = &array;

	for (i = 0; i <= n; i++)
	{
		_putchar(*(p + i));

		if (i < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
