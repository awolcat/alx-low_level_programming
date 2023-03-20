#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog identity
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: definition is called by struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
