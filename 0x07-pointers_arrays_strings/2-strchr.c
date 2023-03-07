#include <stdio.h>
/**
 * _strchr - find and return first instance of c in s
 * @s: Input string
 * @c: Character to check for
 * Description: Return s but only from first instance of c
 * Return: the rest of s from first instance of s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
		return (s + i);
return (NULL);
}
