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
	listint_t *prenode, *nextnode, *node;

	if (head)
	{
		if (index == 0)
		{
			node = (*head)->next;
			free(*head);
			*head = node;
			return (1);
		}
		prenode = *head;
		node = (*head)->next;
		nextnode = node->next;
		while (n < (index - 1))
		{
			if (node == NULL)
			{
				free(prenode);
				return (1);
			}
			else if (nextnode == NULL)
			{
				free(node);
				return (1);
			}
			prenode = prenode->next;
			node = node->next;
			nextnode = nextnode->next;
			n++;
		}
		prenode->next = nextnode;
		free(node);
		return (1);
	}
	return (-1);
}

