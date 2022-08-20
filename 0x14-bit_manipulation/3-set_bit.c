#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to an integer variable
 * @index: bit index
 * Return: 1 0n success or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = *n;
	unsigned long int sum = 0;
	unsigned int i = 0;
	int b = 0;

	if (m == 0 && index > 0)
	{
		while (i < 63)
		{
			if (i == index)
				sum += 1 << i;
			i++;
		}
		*n = sum;
		return (1);
	}
	if (m > 0 && index == 0)
	{
		*n = m + 1;
		return (1);
	}
	if (m > 0 && index > 0 && index < 63)
	{
		while (i < 63)
		{
			if (m && i != index)
			{
				m = m >> 1;
				b = m & 1;
				sum += b << i;
			}
			if (i == index)
				sum += 1 << index;
			i++;
		}
		*n = sum;
		return (1);
	}
	return (-1);
}
