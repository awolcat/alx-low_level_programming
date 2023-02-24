#include <stdio.h>
#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int n = 0;

	for (i = size; i >= 0; i--)
	{
	if ((size - i) > 0)
	{	
		for (j = 1; j <= size - n; j++)
		{
			_putchar (' ');
		}
	
	}
	for (k = 1; k <= size - i; k++)
		{	
			_putchar ('#');
		}
	n++;

	if (i > 0)
	{
		_putchar ('\n');
	}


	}



	if (size <= 0)
		_putchar ('\n');
}
