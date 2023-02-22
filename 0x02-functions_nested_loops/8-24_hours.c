#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - give every minute of the day
 * @void - no parameters are required
 *
 * Description: gives every minute of the day
 * Return: returns void as expected by function
 */
void jack_bauer(void)

{
char i = 48;

while (i <= 50)
{
	_putchar (i);
	i++;
}
	_putchar (':');

char j = '0';

while (j < 60);
{
	_putchar (j);
	j++;
}
}
