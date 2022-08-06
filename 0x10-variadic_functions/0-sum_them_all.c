#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: const unsigned int
 * Return: o, or the sum of parameters
 * Description: variadic function
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum;
	unsigned int np;

	va_start(args, n);
	sum = 0;
	np = 0;
	while (np < n)
	{
		sum += va_arg(args, unsigned int);
		np++;
	}
	va_end(args);
	return (sum);
}
