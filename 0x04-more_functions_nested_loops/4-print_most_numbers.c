#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers 0-9 except 2 ,4
 * @void: no parameters accepted
 *
 * Description: print numbers 0-9 with exceptions
 * Return: nothing
 */
void print_most_numbers(void)

{
	char i = '0';

	while (i <= '9')
	{
		if ((i != '2') && (i != '4'))
	{
		_putchar (i);
	}
		i++;
	}
	_putchar ('\n');
}
