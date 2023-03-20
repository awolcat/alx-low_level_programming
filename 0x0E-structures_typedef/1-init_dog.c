#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize var d of type struct dog
 * @d: the variable to be initialized
 * @name: arg that is also member of struct dog
 * @age: arg that is also member of struct dog
 * @owner: arg that is also member of struct dog
 *
 * Description: the args are the structure and variables named after members
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
