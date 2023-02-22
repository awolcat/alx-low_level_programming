#include <stdio.h>

/**
 * print_last_digit - print last digit of any number
 * @j: the input number
 *
 * Description: finds and returns the last digit of any number as a positive no.
 * Return: returns the last digit as a positive
 */
int print_last_digit(int j)

{	
	int n;
	
	n = j % 10;
	
	if (n < 0)
{
	n = -n;
}
	return (n);
}
