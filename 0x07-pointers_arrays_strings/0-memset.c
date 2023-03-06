#include <stdio.h>
/**
 * _memset - fills n bytes starting from s with b
 * @s: The origin address
 * @b: The value to be put
 * @n: The number of bytes to put b
 * Description: check function
 * Return: Address of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
