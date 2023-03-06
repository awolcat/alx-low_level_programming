#include <stdio.h>
/**
 * _strstr - find full string
 * @haystack: string to be searched
 * @needle: string to search for
 * Description: check function
 * Return: pointer to occurence in haystack
 */
	char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
			if (*(haystack + i) == (*needle))
			{
				return ((haystack + i));
			}
	}
	return (NULL);
}
