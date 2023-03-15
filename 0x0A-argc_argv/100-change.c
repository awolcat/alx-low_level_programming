#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimum number of coins to give full change
 * @argc: number of arguments
 * @argv: argument string
 * Description: possible denominations of coins are given
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int j, coins, change;
	int denom[] = {25, 10, 5, 2, 1};

	coins = 0;
	change = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (change < 0)
	{
		printf("0\n");
		return (1);
	}
	for (j = 0; j < 5; j++)
	{
		if (change >= denom[j])
		{
			while (change >= denom[j])
			{
				change = change - denom[j];
				coins++;
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
