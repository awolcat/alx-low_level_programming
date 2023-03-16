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
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * max - min + 1);

	if (array == NULL)
		return (NULL);

	for (i = min, indx = 0; i <= max; i++, indx++)
	{
		array[indx] = i;
	}
	return (array);
}
