#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: no of args
 * @argv: string arguments
 * Description: check fn
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) && atoi(argv[i]) >= 0 && argc > 1)
		{
			sum = sum + atoi(argv[i]);
		}
		else if (argc <= 1)
			printf("0\n");
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
