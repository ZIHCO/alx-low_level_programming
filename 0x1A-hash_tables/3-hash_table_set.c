#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key to be add
 * @value: the value to add
 * Return: 1 if successful, 0 otherwisw
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int size, idx;

	if (ht && strlen(key) > 0 && key)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;

		size = ht->size;
		idx = key_index((unsigned char *) node->key, size);

		if (ht->array[idx] == NULL)
		{
			ht->array[idx] = node;
			return (1);
		}

		node->next = ht->array[idx];
		ht->array[idx] = node;
		return (1);
	}
	return (0);
}
