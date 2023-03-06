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
	int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i) == (*needle))
			{
				return ((haystack + i));
			}
		}
	}
	return (NULL);
}
