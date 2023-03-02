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
	int i, j;
	int len = strlen(dest);
	static char ch[1100];
	char *p;

	p = dest;
	for (i = 0; i != '\0'; i++)
	{
		*(ch + i) = *(src + i);
		dest[len + i] = *(ch + i);
		src = ch;
	}
	for (j = len; j >= 0; j--)
	{
		*(p + j) = *(dest + j);
	}
	dest[len + i] = '\0';

	return (src);
return (dest);
}
