#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memory and initialize it to 0
 * @nmemb: number of elements/members
 * @size: size of each member
 * Description: memory allocated is nmemb multiplied by size
 * Return: NULL or ptr to memory allocated
 */ 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
