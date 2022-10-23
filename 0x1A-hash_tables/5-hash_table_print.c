#include "hash_tables.h"

/**
 * hash_table_print - that prints a hash table
 * @ht: is the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, size, flag;

	if (ht && ht->array)
	{
		flag = 0;
		size = ht->size;
		printf("{");
		for (i = 0; i < size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				flag = 1;
			}
		}
		printf("}\n");
	}
}
