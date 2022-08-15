#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  that frees a listint_t list.
 * @head: pointer to a head
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
		free(head);
	}
}
