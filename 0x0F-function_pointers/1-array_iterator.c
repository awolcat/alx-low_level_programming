#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - perform action with action fn on array elements
 * @array: the array
 * @size: size of the array
 * @action: function dictating action to perform on array elements
 *
 * Description: pass array elements to function pointed to by action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;
	int *arr;

	if (array != NULL && size > 0 && action != NULL)
	{
		arr = malloc(sizeof(int) * size);
		if (arr == NULL)
		{
			free(arr);
			exit(1);
		}
		for (i = 0; i < size; i++)
		{
			arr[i] = array[i];
			(*action)(arr[i]);
		}
	}
}
