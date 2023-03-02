#include <stdio.h>
#include <string.h>

char *cap_string(char *str)
{
	unsigned int i;

	if (str[0] > 'a' && str[0] < 'z')
		str[0] = str[0] - 'a' + 'A';

	for (i = 0; i < strlen(str); i++)
	{
		if ((str[i] == 32) && (str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		else if (str[i] == 10)
		{
			str[i + 1] = str[i + 1] +'A' - 'a';
		}
		else if (str[i] == 9)
		{
			str[i + 1] = str[i + 1] + 'A' - 'a';
		}
		else if ((str[i] == 46) && (str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] + 'A' - 'a';
		}

	}
	return (str);
}
