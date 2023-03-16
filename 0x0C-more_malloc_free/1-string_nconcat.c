#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - append s1 with first n chars from s2
 * @s1: first string
 * @s2: second string
 * @n: number of chars from start of s2
 * Description: dynamic memory allocation
 * Return: allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	if (n >= j)
	{
		n = j;
	}
	ptr = malloc(sizeof(char) * i + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (k = 0; k < n; k++)
		ptr[i + k] = s2[k];

	ptr[i + k] = '\0';
	return (ptr);
}
