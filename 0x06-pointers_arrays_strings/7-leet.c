#include <stdio.h>
#include <string.h>
/**
 * leet - replaces chars with numbers
 * @str: the input string
 * Description: encode 43071 into string
 * Return: string
 */
char *leet(char *str)
{
	static char mystr[256];
	int len = strlen(str);
	int j = 0;
	int i;

	for (i = 0; i < len; i++)
	{
		char c = str[i];

		if (c == 'a' || c == 'A')
		{
			mystr[j++] = '4';
		}
		else if (c == 'e' || c == 'E')
		{
			mystr[j++] = '3';
		}
		else if (c == 'o' || c == 'O')
		{
			mystr[j++] = '0';
		}
		else if (c == 't' || c == 'T')
		{
			mystr[j++] = '7';
		}
		else if (c == 'l' || c == 'L')
		{
			mystr[j++] = '1';
		}
		else
		{
			mystr[j++] = c;
	}
	}
	mystr[j] = '\0';
	return (mystr);
}
