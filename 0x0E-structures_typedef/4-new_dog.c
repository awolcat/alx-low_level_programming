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
	int i, j;
	int strlen1 = 0;
	int strlen2 = 0;
	char *a;
	char *b;

	for (i = 0; name[i] != '\0'; i++)
		strlen1++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	a = malloc(sizeof(char) * (strlen1 + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		a[i] = name[i];
	a[i] = '\0';
	newdog->name = a;
	newdog->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		strlen2++;

	b = malloc(sizeof(char) * (strlen2 + 1));
	if (b == NULL)
		return (NULL);
	for (j = 0; owner[j] != '\0'; j++)
		b[j] = owner[j];
	b[j] = '\0';
	newdog->owner = b;

	return (newdog);
}
