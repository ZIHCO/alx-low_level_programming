#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: the key to return the index
 * @size: size of the table table
 * Return: the index with the give key or null
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashcode = hash_djb2(key);

	return (hashcode % size);
}
