#include <stdio.h>

/**
 * _isdigit - checks if character is a number
 * @c: function accepts int data type
 *
 * Description: checks for a digit0-9
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	while (c >= 48 && c <= 57)
		return (1);
return (0);
}
