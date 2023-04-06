#include <stdio.h>
/**
 * clear_bit - set bit at index to 0
 * @n: number whose bit to clear
 * @index: position of bit to clear
 *
 * Description: clear bit at position index of n
 * Return: 1 success or -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(i << index);
	return (1);
}
