#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the list
 * Return: the number of nodes in the list
 * Description: This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	void *addr;

	if (head)
	{
		while (head)
		{
			addr = (void *)head;
			printf("[%p] %d\n", addr, head->n);
			head = head->next;
			if (head == NULL)
				exit(98);
			i++;
		}
		return (i);
	}
	exit(98);
}
