#include <stdio.h>
/**
 * print_diagsums - print diagonal sums
 * @a: 2-day array
 * @size: size of array
 * Description: check function
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = a[(i * size) + i] + sum;
		sum1 = a[(size - 1) + ((size - 1) * i)] + sum1;
	}
	printf("%d, %d\n", sum, sum1);
}
