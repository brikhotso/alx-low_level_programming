#include "hash_tables.h"

/**
 * key_index - Get the index of a key in a hash table.
 * @key: The key string.
 * @size: Size of the array in the hash table.
 *
 * Return: Index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code, index;

	hash_code = hash_djb2(key);

	index = hash_code % size;

	return (index);
}
