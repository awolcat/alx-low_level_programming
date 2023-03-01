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
	int i;
	int len = strlen(dest);
	static char ch[1100];

	for (i = 0; i != '\0'; i++)
	{
		*(ch + i) = src[i];
		dest[len + i] = *(ch + i);
		src = ch;
	}
	dest[len + i] = '\0';	
	
	return (src);
return (dest);
}
