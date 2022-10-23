#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the table pointer
 * @key: key to the index
 * Return: NULL, or value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashcode, idx, size;
	char *value;

	if (ht && key)
	{
		size = ht->size;
		hashcode = hash_djb2((unsigned char *) key);
		idx = hashcode % size;

		if (ht->array[idx] == NULL)
			return (NULL);
		while (strcmp(key, ht->array[idx]->key) != 0)
		{
			ht->array[idx] = ht->array[idx]->next;
		}
		value = ht->array[idx]->value;
		return (value);
	}
	return (NULL);
}
