#include <stdio.h>
#include <string.h>
/**
 * _strncat - append n chars of str 2 to str 1
 * @dest: destination string
 * @src: string to copy
 * @n: number of chars to copy from string 1
 * Description: check function
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;


	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

		for (j = 0; j < n; j++)
		{
			dest[len++] = src[j];
		}
	dest[len++] = '\0';

	return (dest);
}
