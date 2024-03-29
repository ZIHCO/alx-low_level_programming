#include "lists.h"
#include <stdlib.h>

/**
 * free_list - that frees a list_t list
 * @head: pointer to a head
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head);
}
