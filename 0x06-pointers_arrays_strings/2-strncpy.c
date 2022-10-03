#include "main.h"
#include <stdlib.h>

/**
 * _strncpy -  function that copies a string.
 * @dest: the destination pointer to copy to
 * @src: source pointer to copy from
 * @n: number of string to copy
 * Return: the pointer to the copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _strlen - return the length of a string
 * @str: the string argument
 * Return: an integer
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
