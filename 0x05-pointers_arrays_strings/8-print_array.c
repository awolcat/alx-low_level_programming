#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_array - print n elements of an array
 * @n: number of elements to print
 * @a: array input
 * Description: print n elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, j;
	int p[300];


	for (i = 0; i < n; i++)
	{
		p[i] = *(a + i);
		printf("%d", p[i]);

		for (j = 0; j < 1; j++)
		{
			if (i < (n - 1))
			printf(", ");
		}
	}
	printf("\n");

}
