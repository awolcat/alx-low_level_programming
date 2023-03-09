#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - calls a fn to find sqrt
 * @n: Number to evaluate
 * Description: check fn
 * Return: an int
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 0));
}
/**
 * sqr - finds the natural root of a number
 * @n: the number
 * @i: the root
 * Description: check fn
 * Return: an int i
 */
int sqr(int n, int i)
{
	i++;
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqr(n, i));
}
