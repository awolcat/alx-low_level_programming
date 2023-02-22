#include <stdio.h>

/**
 * _isalpha - checks if charatcer is a letter
 * @c: an int data type of which characters are
 *
 * Description: Function returns 1 if character is a letter
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
	return (1);
}
	return (0);
}
