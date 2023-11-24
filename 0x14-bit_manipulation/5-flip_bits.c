#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int iterable, no_flip = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (iterable = 0; iterable < j; iterable++)
	{
		if ((m & 1) != (n & 1))
			no_flip += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (no_flip);
}

