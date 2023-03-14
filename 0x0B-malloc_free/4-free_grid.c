#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free memory allocated by 3-alloc_grid.c
 * @grid: pointer to 2-d array
 * @height: no of rows in created array
 * Description: free individual rows then the main mem block
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
