#include <stdio.h>
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Description: compares only first instance of difference
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int dif = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		dif = 0;
		i++;
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	dif = s1[i] - s2[i];
	return (dif);
}
