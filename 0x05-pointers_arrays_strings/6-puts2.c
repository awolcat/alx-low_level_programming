#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other charatcer
 * @str: input string
 *
 * Description: print every other char
 * Return: void
 */
void puts2(char *str)
{
	unsigned int i, n;

	n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; n = n + 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');

}
