#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the header
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *newtmp;

	if (head)
	{
		tmp = (*head)->next;
		while (tmp)
		{
			newtmp = tmp->next;
			free(tmp);
			tmp = newtmp;
		}
		free(*head);
	}
	head = NULL;
}
