#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocate memory and check allocation result
 * @b: The amount of memory to allocate in bytes
 * Description: r used to ensure return of 98 on failure
 * Return: void ptr on success, 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
