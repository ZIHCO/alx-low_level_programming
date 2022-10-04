#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a dlistint_t
 * @head: pointer to the head
 * Return: 0, or the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (head)
	{
		node = head;
		while (node)
		{
			sum += node->n;
			node = node->next;
		}
	}
	return (sum);
}
