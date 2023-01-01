#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: integer argument
 * Return: -1 or the square root of n
 * Description: The standard library provides a different
 * function: sqrt. Run man sqrt to learn more.
 */
int _sqrt_recursion(int n)
{
	int half;

	if (n > 1)
	{
		half = 2;

		return (find_root(half, n));
	}
	else if (n == 1)
		return (1);
	return (-1);
}

/**
 * find_root - root
 * @i: integer
 * @k: integer to find its root
 * Return: root, or -1
 */
int find_root(int i, int k)
{
	if (i == k)
		return (-1);
	if (k == i * i)
		return (i);
	i = i + 1;
	return (find_root(i, k));
}
