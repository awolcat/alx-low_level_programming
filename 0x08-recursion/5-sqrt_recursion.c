#include <stdio.h>

int _sqrt_recursion(int n)
{
	int y = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		y = y + 2;
		return (1 + _sqrt_recursion(n - y));
	}
}
