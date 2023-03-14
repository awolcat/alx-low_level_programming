#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copies a string to an allocated memory block
 * @str: pointer to the input string
 * Description: check function
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	int  i, j;
	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
		;
	ptr = malloc((sizeof(char) * i) + 1);

	if (ptr == NULL || *str == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	ptr[i + 1] = '\0';
return (ptr);
}
