#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - find index of element that meets criteria in cmp
 * @array: the array to inspect
 * @size: size of array
 * @cmp: function that does a comparison
 *
 * Description: Find index of element that meets cmp criteria
 * Return: an int which is array index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		/**
		arr = malloc(sizeof(int) * size);
		if (arr == NULL)
		{
			free(arr);
			exit(1);
		}
		for (i = 0; i < size; i++)
		{
			arr[i] = array[i];
		}*/
		j = 0;
		while ((*cmp)(array[j]) <= 0 && j < size)
		{
			(*cmp)(array[j]);
			j += 1;
		}
		if (j == size)
			return (-1);
	}
	else
		return (-1);
	return (j);
}
