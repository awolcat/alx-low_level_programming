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
	int i, j;

	ptr = malloc(sizeof(int *) * height);
	for (i = 0; i < width; i++)
	ptr[i] = malloc(sizeof(int) * width);

	if (ptr == NULL || width <= 0 || height <= 0)
	{
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
