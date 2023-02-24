#include <stdio.h>
#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;


	for (i = size; i >= 0; i--)
	{
		for (j = size; j >= 0; j--)
		{
			_putchar (' ');
		}
		_putchar ('#');
	}
	_putchar ('\n');

	if (size <= 0)
		_putchar ('\n');
}
