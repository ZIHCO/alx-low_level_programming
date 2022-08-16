#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head
 * @index: the node index
 * Return: a node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (head)
	{
		tmp = head;
		while (i < index)
		{
			tmp = tmp->next;
			if (tmp == NULL)
				return (NULL);
			i++;
		}
		return (tmp);
	}
	return (NULL);
}
