#include "main.h"

/**
 * flip_bits - number of bits needed to be flipped
 * to move from one number to another number
 * @n: parameter
 * @m: The number to flip n to.
 * Return: nflips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, nflips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
