#include <stdio.h>

/**
 * _strncpy - copy string 2 into string 1
 * @dest: destination string
 * @src: string to copy
 * @n: number of chars to copy
 * Description: str2 is copied to index 0 of str1
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j, len;
	int i = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
