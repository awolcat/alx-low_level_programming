#include <stdio.h>
#include "main.h"
/**
 * print_sign - function to detect sign of an int
 * @n: an integer
 *
 * Description: returns potive, negative or 0
 * Return: return for each statement
 */

int print_sign(int n)
{
	if (n > 0)
{		_putchar('+');
		return (1);
}
	else if (n < 0)
{		_putchar('-');
		return (-1);
}
	else
{		_putchar('0');
		return (0);
}
}
