#include "main.h"

/**
  * set_bit - value of a bit to 1 at a given index to be set.
  * @n: change unsigned long
  * @index: change index to one
  * Return: 1 if it worked or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
