#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers delimited by seperator
 * @separator: delimiter
 * @n: number of args
 *
 * Description: format output with specified delimiter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int x = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);
		printf("%d", x);
		
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
