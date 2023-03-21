#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog - free allocation of d
 * @d: pointer to allocated memory
 *
 * Description: free struct of type dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
