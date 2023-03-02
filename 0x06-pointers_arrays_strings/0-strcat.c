#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Description: concatenates src to dest
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
