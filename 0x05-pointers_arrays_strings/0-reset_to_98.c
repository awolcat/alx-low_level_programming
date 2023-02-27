#include <stdio.h>
/**
 * reset_to_98 - reset value of parameter to 98
 * @n: an address
 *
 * Description: resset value using pointer
 * Return: void
 */

void reset_to_98(int *n)

{
	int *p = n;

	*p = 98;
}
