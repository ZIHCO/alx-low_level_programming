#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 * Return: NULL or a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	*hash_table_t new_table = malloc(sizeof(hash_table_t) * size);
	if (new_table == NULL)
	{
		return (NULL);
	}
	return (new_table)
}
