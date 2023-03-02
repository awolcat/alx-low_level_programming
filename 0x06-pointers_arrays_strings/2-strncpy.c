#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: number of bytes from source
 * Description: check function
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
