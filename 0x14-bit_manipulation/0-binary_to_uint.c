#include "main.h"

/**
  * binary_to_uint - converts a binary figure to an unsigned integer
  * @b: The binary number to convert
  * Return: The converted number, or 0 if the number is invalid.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int y;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
		;
	y--;
	for (place = 1, uint = 0; y >= 0; y--)
	{
		if (b[y] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[y] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
