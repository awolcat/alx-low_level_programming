#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert 'binary' string to decimal
 * @b: String of 0s and 1s to convert to decimal
 *
 * Description: Convert binary(string of 0s and 1s) to decimal number
 * Return: Converted Number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, arr[31], len = 0;
	unsigned int dec = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		len++;
	}

	/* Create an array to mimic doubling */
	arr[31] = 1;
	for (i = 30; i >= 0; i--)
	{
		arr[i] = arr[i + 1] * 2;
	}
	/* Multiply each instance of '1' by corresponding arr val ie convert */
	len = len - 1;
	for (i = len; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			dec += (1 * arr[31 - (len - i)]);
		}
	}
	return (dec);
}


