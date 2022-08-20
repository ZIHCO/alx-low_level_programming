#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: an integer an argument
 * @index: the index to get value
 * Return: 1, 0, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;
	unsigned int i = 0;

	b = 0;
	if (index == 0)
	{
		n = n >> 1;
		b = n & 1;
		return (b);
	}
	while (n)
	{
		n = n >> 1;
		b = n & 1;
		i++;
		if (index == i)
			return (b);
	}
	if (index > i && index < 63)
		return (0);
	return (-1);
}
