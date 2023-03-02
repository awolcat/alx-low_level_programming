#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
	int i;
	int dif;

	for (i = 0; s1[i] != '\0'; i++)
	{
		dif = s1[i] - s2[i];
		dif += dif;
	}
	return (dif);
}
