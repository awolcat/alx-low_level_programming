#include <stdio.h>
/**
 * flip_bits - count number of bits to flip to get m from n or vice versa
 * @n: first integer
 * @m: second integer
 *
 * Description: number of bits that should be flipped to make integers equal
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipd = 0;
	int set = 0;

	flipd = flipd | (m ^ n);
	while (flipd)
	{
		set = set + (flipd & 1);
		flipd = (flipd >> 1);
	}
	return (set);
}
