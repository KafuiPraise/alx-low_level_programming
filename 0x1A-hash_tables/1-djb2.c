#include "hash_tables.h"

/**
 * hash_djb2 - Generates a hash using the djb2 algorithm
 * @str: a pointer to a string to hash
 *
 * Return: The dbj2 hash of str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	unsigned int c = '\0';

	while ((c = *str++))
		hash += (hash << 5) + c;

	return (hash);
}
