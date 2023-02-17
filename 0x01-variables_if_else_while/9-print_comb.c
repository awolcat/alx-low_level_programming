#include <stdio.h>
/**
 * main - starting point
 *
 * Description: output zero to nine followed by comma
 * Return: Return zero indicates success
 */

int main(void)

{
	int a = 0;

	while (a <= 9)
{
		putchar(48 + a);

		if (a < 9)
{
		putchar(',');
		putchar (' ');
}
	a++;
}
	putchar('\n');
	return (0);
}
