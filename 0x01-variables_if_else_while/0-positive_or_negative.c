/**
 * main - The program starts at the function main
 *
 * Description: The main function controls program execution
 * Return: The function returns an integer zero
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *main - The program starts at the function main
 *
 *Description: The main function controls program execution
 *Return: The function returns an integer zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
