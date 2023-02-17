#include <stdio.h>

/**
 * main - this is where the program starts
 *
 * Description: Function prints numbers less than ten
 * Return: Returns integer zero
 */

int main(void)
{
	int a = 0;

	while (a < 10)
{		printf("%d", a);
		a++;
}
	printf("\n");
	return (0);
}
