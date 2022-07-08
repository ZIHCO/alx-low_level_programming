#include "main.h"

/**
 * _abs - computes absolute value
 * @n: integers
 * Return: on success n, 0, -n
 * Description: the absolute value function is a non negative
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
