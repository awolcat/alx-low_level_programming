#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - capitalize first word after seperator
 * @str: input string
 * Description: capitalize!
 * Return: string
 */
char *cap_string(char *str)
{
	char sep[] = {',', '.', '?', '!', ';', 9, 10, '(', ')', '{', '}', 32, 34};
	int i = 0;
	int j = 13;
	int k;
	char filt;

	while (str[i])
	{
		k = 0;
		while (k < j)
		{
			if ((i == 0 || str[i - 1] == sep[k]))
			{
				filt = str[i];
				str[i] = toupper(filt);
			}
		k++;
		}
	i++;
	}
	return (str);
}
