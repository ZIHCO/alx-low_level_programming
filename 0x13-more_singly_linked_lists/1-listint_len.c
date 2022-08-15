#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked
 * @h: pointer to an header
 * Return: an integer on success
 */
size_t listint_len(const listint_t *h)
{
	size_t k;
	const listint_t *new;

	k = 1;
	if (h != NULL)
	{
		new = h;
		while (new->next)
		{
			new = new->next;
			k++;
		}
		return (k);
	}
	return (k);
}
