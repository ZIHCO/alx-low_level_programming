#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer to a memory area
 * @b: a constant to fill s with
 * @n: the number of times to do the filling
 * Return: on success a pointer to s
 * Description: : The standard library provides a similar
 * function: memset. Run man memset to learn more.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
