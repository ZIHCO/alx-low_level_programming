#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the header
 * Return: an unsized integer the length of element
 */
size_t print_listint(const listint_t *h)
{
	size_t k;
	const listint_t *new;

	k = 0;
	if (h != NULL)
	{
		new = h;
		while (new)
		{
			printf("%u\n", new->n);
			new = new->next;
			k++;
		}
		return (k);
	}
	return (0);
}
