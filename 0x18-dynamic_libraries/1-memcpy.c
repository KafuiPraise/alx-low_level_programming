#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: where  memory is stored
 *@src: memory where is copied
 *@n: number of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int d = n;

	for (; c < d; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
