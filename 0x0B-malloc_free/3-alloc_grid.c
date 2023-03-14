#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate and intialize a 2-d array
 * @width: number of columns
 * @height: number of rows
 * Description: see function
 * Return: pointer to an array of pointers
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;
	int j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			return (NULL);
		}
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
