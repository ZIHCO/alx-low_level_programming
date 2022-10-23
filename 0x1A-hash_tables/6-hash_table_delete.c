#include "hash_tables.h"

/**
 * hash_table_delete -  that deletes a hash table.
 * @ht: is the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;

	if (ht)
	{
		if (ht->array)
		{
			for (; i < ht->size; i++)
			{
				node = ht->array[i];
				while (node)
				{
					if (tmp)
					{
						free(tmp->key);
						free(tmp->value);
						free(tmp);
					}
					tmp = node->next;
					free(node->key);
					free(node->value);
					free(node);
					node = tmp;
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
