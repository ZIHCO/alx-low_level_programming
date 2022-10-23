#include "hash_tables.h"

/**
 * hash_table_delete -  that deletes a hash table.
 * @ht: is the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **node, *tmp;
	unsigned long int i = 0;

	if (ht)
	{
		node = ht->array;
		if (node)
		{
			for (; i < ht->size; i++)
			{
				while (node[i])
				{
					if (tmp)
						free(tmp);
					tmp = node[i]->next;
					free(node[i]->key);
					free(node[i]->value);
					if (tmp == NULL)
						free(node[i]->next);
					free(node[i]);
					node[i] = tmp;
				}
			}
		}
		free(node);
		free(ht);
	}
}
