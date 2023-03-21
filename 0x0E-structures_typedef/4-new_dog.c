#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of new owner
 *
 * Description: create anew dog
 * Return: a dog_t pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int strlen1 = 0;
	int strlen2 = 0;
	int i;

	for (i = 0; name[i] != '\0'; i++)
		strlen1++;
	for (i = 0; owner[i] != '\0'; i++)
		strlen2++;

	newdog = malloc(sizeof(float) + strlen1 + strlen2 + 4);

	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
