#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: The string input to be reversed
 *
 * Description: print string literal in reverse
 * Return: void
 */



void rev_string(char *s)
{
	int i;
	int j;
	char ss[1000];


	for (i = 0; s[i] != 0; i++)
	{
		ss[i] = s[i];
	}

	for (i -= 1, j = 0; i >= 0; i--, j++)
	{
		s[j] = ss[i];
	}
}
