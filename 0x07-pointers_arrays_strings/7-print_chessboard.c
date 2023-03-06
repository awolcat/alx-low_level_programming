#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - print 2d array
 * @a: 2-d array
 * Description: check function
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar (a[i][j]);
		}
		_putchar ('\n');
	}
}
