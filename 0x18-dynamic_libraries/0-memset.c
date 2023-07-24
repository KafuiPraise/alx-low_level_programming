#include "main.h"

/**
 *_memset - it fills memory with a constant byte
*@s: points the 1st n bytes of memory area
*@n: number of bytes of memory area to fill
*@b: constant byte
*Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
