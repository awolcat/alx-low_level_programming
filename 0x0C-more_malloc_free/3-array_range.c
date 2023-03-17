#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - create an int array with specified range
 * @min: minimum value
 * @max: maximum value
 * Description: array starts with min and ends with max
 * Return: array or NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int indx = 0;
	int i, j;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		;

	array = malloc(sizeof(int) * i);

	if (array == NULL)
		return (NULL);

	for (j = min; j <= i; j++)
	{
		array[indx] = j;
		indx++;
	}
	return (array);
}
