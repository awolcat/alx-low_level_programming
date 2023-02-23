#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print 0 - 9
 * @void: no parameters for function
 *
 * Description: print numbers 0-9 as characters
 * Return: Nothing to return
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
{
	_putchar(c);
	c++;
}
	_putchar('\n');
}
