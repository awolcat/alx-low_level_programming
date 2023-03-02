#include <stdio.h>
#include "main.h"
/**
 * print_number - print ints
 * @n: the int
 * Description: printwith _putchar
 * Return: nothing
 */
void print_number(int n) {
	if (n < 0)
	{
	putchar('-');
	n = -n;
	}
	if (n / 10 > 0)
	{
	print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}

