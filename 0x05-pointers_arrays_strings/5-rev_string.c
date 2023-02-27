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
	int r;
	int l = strlen(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		r = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = r;
		
	}
}
