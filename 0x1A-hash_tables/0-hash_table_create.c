#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 * Return: NULL or a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_node_t **arr;
	if (size > 0)
	{
		new_table = malloc(sizeof(hash_table_t));
		if (new_table == NULL)
			return (NULL);

		arr = malloc(sizeof(hash_node_t) * size);
		if (arr == NULL)
			return (NULL);

		new_table->size = size;
		new_table->array = arr;
	}	
	return (new_table);
}
