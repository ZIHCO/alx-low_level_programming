#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to a linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *node;

	if (head && *head)
	{
		while (*head)
		{
			node = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = node;
		}
		*head = prev;
		return (*head);
	}
	return (NULL);
}
