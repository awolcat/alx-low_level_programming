#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - find matching character
 * @s: the string to search
 * @accept: the character being searched for
 * Description: Return pointer to bytes in s where found
 * Return: A char address
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, lens;

	lens = (int)strlen(s);

	for (i = 0; i <= lens; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return(s + i);
			}
		}
	}
	return (NULL);
}
