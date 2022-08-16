#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: a pointer to the list
 * @index: node index
 * Return: 1 or 0;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *prenode, *node;

	if (head == NULL)
		return (-1);
	if (*head)
	{
		if (index == 0)
		{
			node = (*head)->next;
			free(*head);
			*head = node;
			return (1);
		}
		prenode = *head;
		while (prenode)
		{
			if (n == (index - 1))
			{
				node = prenode->next;
				prenode->next = node->next;
				free(node);
				return (1);
			}
			prenode = prenode->next;
			n++;
		}
	}
	return (-1);
}

