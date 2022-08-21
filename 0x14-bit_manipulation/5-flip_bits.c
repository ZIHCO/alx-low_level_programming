#include "main.h"

/**
 * flip_bits - count the number of nonmutual bits
 * @n: first argument
 * @m: second argument
 * Return: unsigned integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	count = 0;
	if (m >= n)
	{
		while (m)
		{
			if ((m & 1) != (n & 1))
				count += 1;
			m = m >> 1;
			n = n >> 1;
		}
	}
	else
	{
		while (n)
		{
			if ((m & 1) != (n & 1))
				count += 1;
			n = n >> 1;
			m = m >> 1;
		}
	}
	return (count);
}
