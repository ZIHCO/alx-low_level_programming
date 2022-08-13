#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: linked list of struct
 * @str: pointer to string to add
 * Return: pointer to the address of the first element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;
		*head = new;
		return (new);
	}
	return (0);
}

/**
 * _strlen - the length of a string
 * @str: the pointer the string
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;

	return (i);
}
