#include <stdio.h>
/**
 * _strpbrk - find matching character
 * @s: the string to search
 * @accept: the character being searched for
 * Description: Return pointer to bytes in s where found
 * Return: A char address
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (s + i);
return (NULL);
}
