#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @n: data to add
 * @head: pointer to the linked list
 * Return: the pointer to the head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		return (tmp);
	}
	return (NULL);
}

