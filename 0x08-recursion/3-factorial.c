#include <stdio.h>
/**
 * factorial - check code
 * @n: number to find factorial
 * Description: check function
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
