#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to an integer variable
 * @index: bit index
 * Return: 1 0n success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = *n;
	unsigned long int sum = 0;
	unsigned int i = 0;
	int b = 0;

	if (m > 0 && index == 0)
	{
		for (i = 0; m; i++)
		{
			m = m >> 1;
			b = m & 1;
			if (i == index)
				sum += 0 << index;
			else
				sum += b << i;
		}
		*n = sum;
		return (1);
	}
	if (index < 63)
	{
		for (i = 1; m; i++)
		{
			m = m >> 1;
			b = m & 1;
			if (i == index)
				sum += 0 << index;
			else
				sum += b << i;
		}
		*n = sum;
		return (1);
	}
	return (-1);
}
