#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings in allocated memory
 * @s1: first string
 * @s2: second string
 * Description: check function description
 * Return: Pointer to allocated memory block
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, m;
	char *ptr;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	i = i + 1;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc(sizeof(char) * (i + j));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; s1[k] != '\0'; k++)
		{
			ptr[k] = s1[k];
		}

		for (m = 0; s2[m] != '\0'; m++)
			ptr[k++] = s2[m];

	ptr[k + 1] = '\0';
	return (ptr);
	}
}
