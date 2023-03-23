#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_i - print int
 * @ap: va_list ptr
 *
 * Description: print int
 * Return: 0 success
 */
int print_i(va_list ap)
{
	printf("%i", va_arg(ap, int));
	return (0);
}
/**
 * print_c - print char
 * @ap: va_list ptr
 *
 * Description: print char
 * Return: 0 success
 */
int print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
	return (0);
}
/**
 * print_f - print float
 * @ap: va_list ptr
 *
 * Description: print float
 * Return: 0 success
 */
int print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
	return (0);
}
/**
 * print_s - print string
 * @ap: va_list ptr
 *
 * Description: print string
 * Return: 0 success
 */
int print_s(va_list ap)
{
	if (ap == NULL)
	{
		printf("(nil)");
	}
	else
	printf("%s", va_arg(ap, char *));
	return (0);
}
/**
 * print_all - print all
 * @format: const format specifier
 *
 * Description: print all
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;

	sl_ct act[] = {
			{"i", print_i},
			{"c", print_c},
			{"f", print_f},
			{"s", print_s},
			{NULL, NULL}
			};

	va_start(ap, format);

	i = 0;
	while (act[i].fmt)
	{
		j = 0;
		while (j < 4)
		{
			if (*(act[i].fmt) == format[j])
			{
				(act[i].f)(ap);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
