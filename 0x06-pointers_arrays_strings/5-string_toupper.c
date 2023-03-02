#include <stdio.h>
/**
 * string_toupper - converts lower case to upper case
 * @str: the input to be converted
 * Description: check code
 * Return: a char*
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i]  = str[i] - 'a' + 'A';

		i++;
	}
	return (str);
}
