#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a char
 * Return: an integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int number = 0;
	unsigned int lastindex = _strlen(b) - 1;

	if (isbinary(b) == 0)
		return (number);
	if (b == NULL)
		return (number);
	for (i = 0; b[i]; i++)
	{
		if (b[lastindex] == '1')
			number += 1 << i;
		lastindex--;
	}
	return (number);
}

/**
 * _strlen - get the length of str
 * @b: pointer to the string
 * Return: an integer
 */
int _strlen(const char *b)
{
	int i = 0;

	while (b[i])
		i++;
	return (i);
}

/**
 * isbinary - check that stringed char are binaries
 * @b: string pointer
 * Return: 0 or 1
 */
int isbinary(const char *b)
{
	int i = 0;

	while (b[i])
	{
		if (b[i] >= 48 && b[i] <= 49)
			i++;
		else
			return (0);
	}
	if (i > 0)
		return (1);
	return (0);
}
