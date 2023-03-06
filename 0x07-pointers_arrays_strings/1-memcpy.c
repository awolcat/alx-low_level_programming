#include <stdio.h>
/**
 * _memcpy - copy n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Description: check function
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
