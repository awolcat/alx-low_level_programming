#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - print an array
 * @array: the array to print
 * @start: starting index
 * @end: last index
 * Description: Formatted  output
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);
		if (start < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * extendo - extension/wrapped function for binary search
 * @array: the array to search
 * @lb: the starting index
 * @ub: the last index
 * @value: the value to search for
 * Description: allows finer tracking of start and end indexes
 * Return: Index of value or -1
 */

int extendo(int *array, size_t lb, size_t ub, int value)
{
	size_t mid = 0;

	if (lb > ub)
		return (-1);

	mid = lb + ((ub - lb) / 2);

	print_array(array, lb, ub);

	if (array[mid] == value)
		return (mid);
	else if (value < array[mid])
		return (extendo(array, lb, mid - 1, value));
	else
		return (extendo(array, mid + 1, ub, value));

	return (-1);
}

/**
 * binary_search - wrapper for extendo
 * @array: the array to be searched
 * @size: size of the array
 * @value: the value to search for
 * Description: wraps  the extendo function
 * Return: Index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	return (extendo(array, 0, size - 1, value));
}
