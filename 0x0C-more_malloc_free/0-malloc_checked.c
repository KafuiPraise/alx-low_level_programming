#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -  memory allocated using malloc
 * @b: the number of bytes to allocated
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
