#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @a: Array to reverse
 * @n: number of elements to reverse
 * Description: check function
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j, k;
	int ar[100];

	for  (j = (n - 1), i = 0; j >= 0; j--, i++)
	{
		ar[i] = a[j];

	}

	for (k = 0; k < n; k++)
		a[k] = ar[k];

}
