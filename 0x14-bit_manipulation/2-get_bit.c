#include <stdio.h>
#include "main.h"
/**
 * get_bit - get the bit at given index
 * @n: number to check
 * @index: desired index
 *
 * Description: get bit at given index of n
 * Return: desired bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int bit = 0;

	for (i = 0; i <= index; i++)
	{
		bit = (n & 1);
		n = (n >> 1);
	}
	if (bit == 1 || bit == 0)
		return (bit);
	return (-1);
}
