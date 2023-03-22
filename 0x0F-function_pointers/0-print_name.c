#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - callback
 * @name: Name to store
 * @f: function that takes a char* and returns nothing
 *
 * Description: callback
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	int i, len = 0;
	char *myname;

	for (i = 0; name[i] != '\0'; i++)
		len += 1;
	myname = malloc(sizeof(char) * ++len);
	if (myname == NULL)
	{
		free(myname);
		exit(1);
	}
	for (i = 0; name[i] != '\0'; i++)
		myname[i] = name[i];
	myname[i] = '\0';
	(*f)(myname);
	}
}
