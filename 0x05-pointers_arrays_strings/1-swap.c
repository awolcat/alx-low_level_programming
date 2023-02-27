#include <stdio.h>
/**
 * swap_int - swaps values of two ints
 * @a: first int
 * @b: second int
 *
 * Description: swap values
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}
