#include <stdio.h>
#include <string.h>
/**
 * _strspn - find substring with only accept and give len
 * @s: input str
 * @accept: accepted chars
 * Description: return string with accept only
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n, m;
	int k = 0;
	int f = 0;
	char acptd[254];
	int sz = (int)sizeof(s);

	for (i = 0; i < sz; i++)
	{
		if ((*(s + i)) == ' ')
		{
		for (n = i - 1; *(s + n) != ' ' && n >= 0; n--)
			{
			for (j = 0; *(accept + j) != '\0'; j++)
			{
				if (*(s + n) == *(accept + j))
				{
					acptd[k] = *(s + n);
					k++;
				}
			}
			}
		}
	}
	for (m = 0; acptd[m] != '\0'; m++)
		f++;
	return (f);
}
