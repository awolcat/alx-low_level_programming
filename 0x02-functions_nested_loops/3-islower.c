#include <stdio.h>

/**
 * _islower - checks if a letter c is lower case
 * @c: an integer value
 *
 * Description: accepts an int and checks case
 * Return: return 1 for fail. ie lower case found
 */
int _islower(int c)



{

	if (c >= 97 && c <= 122)
{
	return (1);

}
return (0);
}
