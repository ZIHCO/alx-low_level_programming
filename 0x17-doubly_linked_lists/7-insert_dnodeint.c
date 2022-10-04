#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head pointer
 * @n: data to insert
 * @idx: what index
 * Return: NULL, or the address of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int k = 0;
	dlistint_t *new;
	dlistint_t *node;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h)
	{
		node = *h;
		if (idx == 0)
		{
			new->next = node;
			new->prev = NULL;
			node->prev = new;
			*h = new;
			return (new);
		}
		for (; node; k++, node = node->next)
		{
			tmp = node->prev;
			if (k == idx)
			{
				tmp->next = new;
				new->next = node;
				new->prev = tmp;
				node->prev = new;
				return (new);
			}
		}
		if (idx == k)
		{
			new->next = NULL;
			new->prev = node;
			tmp->next->next = new;
			return (new);
		}
	}
	else if (idx == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	return (NULL);
}
