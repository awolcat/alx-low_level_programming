#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: strings(arguements)
 * Description: check fn
 * Return: 0 success!
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
