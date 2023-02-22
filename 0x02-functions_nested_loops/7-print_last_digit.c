#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - print last digit of any number
 * @j: the input number
 *
 * Description: finds and returns the last digit of any no as a positive no.
 * Return: returns the last digit as a positive
 */
int print_last_digit(int j)

{
int b;
int n;
char c;

	n = j % 10;
	b = abs(n);
	c = _putchar(b + 48);

return (c);
}
