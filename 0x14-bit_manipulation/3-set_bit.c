#include "main.h"

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
	unsigned int bits = bitsize(m);

	if (m > 0 && index == 0)
	{
		*n = m + 1;
		return (1);
	}
	if (bits > index)
	{
		for (i = 1; m; i++)
		{
			m = m >> 1;
			b = m & 1;
			if (i == index)
				sum += 1 << index;
			else
				sum += b << i;
		}
		*n = sum;
		return (1);
	}
	if (bits < index)
	{
		sum = (1 << index);
		for (i = 1; m; i++)
		{
			m = m >> 1;
			b = m & 1;
			sum += (b << i);
		}
		*n = sum;
		return (1);
	}
	return (-1);
}

/**
 * bitsize - get the size the bit size
 * @n: an integer
 * Return: the bit size
 */
unsigned int bitsize(unsigned long int n)
{
	int i = 0;

	while (n)
	{
		n = n >> 1;
		i++;
	}
	return (i);
}
