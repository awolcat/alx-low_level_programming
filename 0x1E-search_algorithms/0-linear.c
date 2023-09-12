#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search an array linearly
 * @array: the array to search
 * @size: size of the array
 * @value: the value to search for
 * Description: search for value in array
 * Return: Index of the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
