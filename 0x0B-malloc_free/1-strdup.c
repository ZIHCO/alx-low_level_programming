#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - that returns a pointer to a newly allocated
 * space in memory.
 * @str: a pointer to a string as argument
 * Return: NULL if str = NULL, or pointer to duplicated str
 * Description:The _strdup() function returns a pointer
 * to a new string which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 */
char *_strdup(char *str)
{
	char *pstr;
	unsigned long int i, j;

	if (str == NULL)
		return (NULL);
	i = strlen(str);
	if (i > sizeof(pstr))
		return (NULL);
	pstr = malloc(sizeof(pstr));
	j = 0;
	while (j <= i)
	{
		pstr[j] = str[j];
		j++;
	}
	return (pstr);
}
