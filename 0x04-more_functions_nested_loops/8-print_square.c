#include <stdio.h>
#include "main.h"

/**
 * print_square - print # in a square
 * @size: no of # per side
 *
 * Description: print equal # for length and width
 * Return: nothing
 */
void print_square(int size)

{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		if (size > 0)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar ('#');
			}
		}
	_putchar ('\n');
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}

}
