#include <stdio.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;


	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

		for (j = 0; j < n; j++)
		{
			dest[len++] = src[j];
		}
	dest[len++] = '\0';

	return (dest);
}
