#include "main.h"

/**
  * clear_bit - to set the value of a bit to 0 at a given index
  * @n: change unsigned long
  * @index: change index to zero
  * Return: 1 if it worked or -1 if an error occurred
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 53 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);
}
