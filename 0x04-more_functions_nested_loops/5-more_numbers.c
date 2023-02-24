#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 rows
 * @void: no parameters accepted
 *
 * Description: print 0-14 in each row
 * Return: nothing
 */
void more_numbers(void)

{
	int i;
	int j;
	
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar ('0' + j);
			}		
			else 
			{	_putchar ('1');
				_putchar ((j % 10) + '0');
		
			}
		}

	_putchar ('\n');
	}
}
