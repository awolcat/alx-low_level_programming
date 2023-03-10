#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers(args)
 * @argc: number of args
 * @argv: string of args
 * Description: check fn
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
