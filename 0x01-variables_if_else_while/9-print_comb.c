#include <stdio.h>

/**
 * main - starting point
 *
 * Description: output 0-9 followed by comma
 * Return: Return 0 indicates success
 */

int main(void)

{
	int a = 0;

		while (a <= 9)
{
		putchar(48 + a);
		a++;
		putchar(',');
		putchar (' ');
}
	putchar('\n');
	return (0);
}
		

