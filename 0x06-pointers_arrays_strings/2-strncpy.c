#include <stdio.h>

char *_strncpy(char *dest, char *src, int n)
{
	int j, len;
	int i = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	dest[len + j] = '\0';
	return (dest);
}
