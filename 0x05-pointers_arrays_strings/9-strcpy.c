#include <stdio.h>
#include "main.h"
/**
 * _strcpy - check the code
 * @dest: first str pointer
 * @src: second str pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char* orig_dest = dest;
	
	while (*src != '\0')
	{
	*dest++ = *src++;
	}
	*dest = '\0';
	return (orig_dest);
}
