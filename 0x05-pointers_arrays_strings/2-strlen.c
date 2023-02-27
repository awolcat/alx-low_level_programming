#include <stdio.h>
#include <string.h>
/**
 * _strlen - count length of a string
 * @s: The input string of the function
 *
 * Description: loops through string and counts loops
 * Return: len which is no of loops
 */
	int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	return (len);
}
