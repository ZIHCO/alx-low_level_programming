#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints all the elements of a list_t list.
 * @h: pointer to linked list
 * Return: size_t on success
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
