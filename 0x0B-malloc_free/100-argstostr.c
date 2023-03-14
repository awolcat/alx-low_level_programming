#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - print terminal arguments as concatenated string
 * @ac: argument count
 * @av: pointer to argument string
 * Description: dynamic length array using malloc
 * Return: pointer to a string
 */

char *argstostr(int ac, char **av)
{
	int i, j, total = 0;
	int n = 0;
	char *my_array;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total++;
		}
	}
	my_array = malloc(sizeof(char) * (total + ac));
	if (my_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			my_array[n] = av[i][j];
			n++;
		}
		my_array[n++] = '\n';
	}
	my_array[n + 1] = '\0';
	return (my_array);
}
