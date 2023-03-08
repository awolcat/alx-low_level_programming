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
	if ((*s) != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar ((*s));
	}
}
