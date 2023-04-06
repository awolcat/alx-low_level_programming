#include <stdio.h>
/**
 * set_bit - set bit at given index to 1
 * @n: number whose bit to set
 * @index: index of  bit to set
 *
 * Description: shift 1 index places and OR vs n
 * Return: Number with set bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (i << index);
	return (1);
}
