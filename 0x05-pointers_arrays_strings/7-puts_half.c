#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - print last half of a string
 * @str: the input string
 * Description: prints last half of string
 * Return: void
 */

void puts_half(char *str)
{
	unsigned int i, n;

	for (i = 0; i < strlen(str); i++)
	{

		{
		if (strlen(str) % 2 == 0)
		{
			n = strlen(str) / 2;
			if (i < strlen(str) / 2)
			_putchar(str[n + i]);
		}
		else if (strlen(str) % 2 == 1)
		{
			n = (strlen(str) + 1) / 2;
			if (i < strlen(str) / 2)
			_putchar(str[n + i]);
		}

		}
	}
	_putchar('\n');
}
