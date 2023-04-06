#include <stdio.h>
#include "main.h"
/**
 * print_binary - print binary representation of decimal
 * @n: decimal number
 *
 * Description: convert decimal to binary using bitwise
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp, binary = 0, rev_binary = 0;

	temp = n;
	if (n == 0)
		_putchar(48);
	for (; n;)
	{
		binary = (binary << 1);
		binary = (binary | (n & 1));
		n = (n >> 1);
	}
	for (; temp; temp = temp >> 1)
	{
		rev_binary = (rev_binary << 1);
		rev_binary = (rev_binary | (binary & 1));
		binary = (binary >> 1);
		_putchar((rev_binary & 1) + 48);
	}
}
