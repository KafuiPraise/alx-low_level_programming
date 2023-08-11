#include "hash_tables.h"

/**
 * key_index - function that outputs a distributed index
 * @key: The key to hash
 * @size: The hash table size
 *
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
