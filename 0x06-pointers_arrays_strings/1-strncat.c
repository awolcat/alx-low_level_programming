#include <stdio.h>
#include <string.h>
/**
 * _strncat- concatenate two strings
 * @dest: destination str
 * @src: second string
 * @n: bytes of src to concatenate
 * Description: check function
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

	dest = strncat(dest, src, n);
	return (dest);
}
