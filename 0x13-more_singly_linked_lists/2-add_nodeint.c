#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: a pointer the head
 * @n: the data to add
 * Return: a pointer to a listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	return (NULL);
}
