#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the pointer to the list
 * @str: pointer to the string
 * Return: pointer to a list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			tmp->next = new;
			return (*head);
		}
	}
	return (NULL);
}

/**
 * _strlen - length of string
 * @str: string pointer
 * Return: an integer
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
