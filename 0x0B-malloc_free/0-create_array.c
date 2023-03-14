#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array in memory
 * @size: size of array
 * @c: char to initialize array
 * Description: check function
 * Return: pointer to the first address of allocated memory
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL || size < 1)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
return (ptr);
}
