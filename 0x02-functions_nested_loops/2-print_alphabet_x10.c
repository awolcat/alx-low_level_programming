#include "main.h"

/**
 * print_alphabet_x10 - marks the start of execution
 *
 * Description: print alphabet 10x
 * Return: Success 0
 */

void print_alphabet_x10(void)
{

	char c = 'a';
	int i;

	for (i = 0; i <= 9; i++)
{
	for (c = 'a'; c <= 'z'; c++)
{
	_putchar (c);
}
	_putchar ('\n');
}
}
