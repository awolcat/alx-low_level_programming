#include <stdio.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char * cat[1100];
	int len = strlen(dest);

	for (i = 0; i < len; i++)
	{
		*cat[i] = dest[i];
	}
	for (j = 0, k = 0; j < (len +  n); j++, k++)
	{
		*cat[j] = src[k];
	}
	dest = *cat;
		return (dest);
}
