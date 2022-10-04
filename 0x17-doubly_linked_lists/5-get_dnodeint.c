#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @index: the position starting from 0
 * @head: a pointer the head
 * Return: NULL, or the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *node;

	node = head;
	while (node->next != NULL)
	{
		if (n == index)
			return (node);
		node = node->next;
		n++;
	}
	return (NULL);
}
