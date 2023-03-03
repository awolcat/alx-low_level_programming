#include <stdio.h>

/**
 * leet - replaces chars with numbers
 * @str: the input string
 * Description: encode 43071 into string
 * Return: string
 */
char *leet(char *str)
{
	char mystr[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char new[] = {'4', '3', '0', '7', '1'};
	int j = 0;
	int i;

	while (str[j])
	{
		i = 0;
		while (i < 10)
		{
			if (str[j] == mystr[i])
			{
				str[j] = new[i / 2];

			}
		i++;
		}
	j++;
	}
	return (str);
}
