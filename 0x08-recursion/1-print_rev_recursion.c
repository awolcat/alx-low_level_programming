#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s: String input
 * Description: check code
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if ((*s) == '\0')
	{
		;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar ((*s));
	}
}
