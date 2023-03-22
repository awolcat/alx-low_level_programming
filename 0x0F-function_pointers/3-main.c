#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - print result of operation on 2 numbers
 * @argc: argument count
 * @argv: pointer to arguments
 *
 * Description: main
 * Return: 0 success!
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *oprtr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = (atoi)(argv[1]);
	num2 = (atoi)(argv[3]);
	oprtr = argv[2];
	if (get_op_func(oprtr) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*oprtr == '%' || *oprtr == '/') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(oprtr)(num1, num2));
	return (0);
}
