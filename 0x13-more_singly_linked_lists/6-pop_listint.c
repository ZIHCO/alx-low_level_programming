#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer the head
 * Return: n or 0
 * Description: a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	i = 0;
	if (head)
	{
		tmp = (*head)->next;
		i += (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (i);
}
