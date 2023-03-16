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
	unsigned int i, j;

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
	ptr = malloc(sizeof(s1[i]) * (i + j + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
