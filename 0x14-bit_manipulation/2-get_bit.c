#include "main.h"

/**
 * get_bit - takes an unsigned long int ’n' and an index index as arguments
 * @n: search for unsigned long int
 * @index: return index
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
