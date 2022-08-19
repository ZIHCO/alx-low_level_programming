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

	b = 0;
	if (n <= 0)
		return (-1);
	while (index--)
	{
		n = n >> 1;
		b = n & 1;
	}
	return (b);
}
