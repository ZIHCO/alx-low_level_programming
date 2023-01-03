#include "main.h"

/**
 * is_prime_number - test for prime number
 * @n: an integer to test
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n >= 2)
	{
		return (factorise(i, n));
	}
	return (0);
}

/**
 * factorise - test if i is a factor of n
 * @t: integer
 * @m: integer
 * Return: 1 if prime, else 0
 */

int factorise(int m, int t)
{
	if (m == t)
		return (1);
	m++;
	if (t % m == 0 && t != m)
		return (0);
	return (factorise(m, t));
}
