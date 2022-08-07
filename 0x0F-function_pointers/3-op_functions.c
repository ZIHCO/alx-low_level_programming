#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - all of our operators
 * @a: ...
 * @b: ...
 * Return: sum, difference, product, quotient, modulo*
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - all of our operators
 * @a: ...
 * @b: ...
 *
 * Return: sum, difference, product, quotient, modulo
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - all of our operators
 * @a: ...
 * @b: ...
 *
 * Return: sum, difference, product, quotient, modulo
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - all of our operators
 * @a: ...
 * @b: ...
 *
 * Return: sum, difference, product, quotient, modulo
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}

/**
 * op_mod - all of our operators
 * @a: ...
 * @b: ...
 *
 * Return: sum, difference, product, quotient, modulo
 *
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
