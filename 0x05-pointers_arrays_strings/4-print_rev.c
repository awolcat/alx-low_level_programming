#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: The string input to be reversed
 *
 * Description: print string literal in reverse
 * Return: void
 */



void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
