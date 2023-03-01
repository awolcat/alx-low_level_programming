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
	char * cat[300];
	int i, j;
	int len = strlen(dest);
	int len2 = strlen(src);


	for (i = 0; i < len; i++)
	{
		cat[i] = dest++;
	}
	for (j = 0; j < len2; j++)
	{
		cat[len + j] = src++;
	}

return (*cat);
}
