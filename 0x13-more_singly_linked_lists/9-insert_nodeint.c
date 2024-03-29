#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the list
 * @idx: the index to insert on
 * @n: data (n) to insert
 * Return: the address of the new node, or NULL on failure
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node;
	unsigned int i = 0;

	if (head)
	{
		tmp = malloc(sizeof(listint_t));
		if (tmp == NULL)
			return (NULL);
		tmp->n = n;
		if (idx == 0)
		{
			tmp->next = *head;
			*head = tmp;
			return (tmp);
		}
		node = *head;
		while (i < (idx - 1))
		{
			i++;
			node = node->next;
			if (node == NULL)
				return (NULL);
		}
		tmp->next = node->next;
		node->next = tmp;
		return (tmp);
	}
	return (NULL);
}
