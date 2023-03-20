#include <stdio.h>
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
	dog_t newdog;
	dog_t *ptr;

	char *newname = name;
	char *newowner = owner;

	ptr = &newdog;
	ptr->name = newname;
	ptr->age = age;
	ptr->owner = newowner;
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
