#include "main.h"
#include <stdlib.h>

/**
 * binary_to_unit - converts a binary number to an unsigned int.
 * @b: pointer to a char
 * Return: an integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int power = _strlen(b) - 1;
	unsigned int number = 0;
	unsigned int placeval = 1;
	int lastindex = _strlen(b) - 1;
	int j = 0;

	if (isbinary(b) == 0)
		return (0);
	for (i = 0; b[i] && b; i++)
	{
		if (lastindex == i)
		{
			if (b[i] == '1')
				number += 1;
			return (number);
		}
		else if (b[i] == '0')
			power -= 1;
		else
		{
			while (j < power)
			{
				placeval *= 2;
				j++;
			}
			j = 0;
			number += placeval;
			placeval = 1;
			power -= 1;
		}
	}
	return (0);
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
		if (b[i] >= 48 && b[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
