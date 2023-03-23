#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - add arguments
 * @n: number of arguments
 *
 * Description: find sum of all args
 * Return: 0 for no args (!n) or sum if n
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	int x = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);
		sum = sum + x;
	}
	va_end(ap);
	return (sum);
}
