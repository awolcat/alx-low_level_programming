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
	unsigned int i;

	for (i = 0; *(str + i) != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	}
}
