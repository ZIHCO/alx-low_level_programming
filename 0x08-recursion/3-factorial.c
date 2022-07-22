#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: integer argument.
 * Return: n factorial.
 * Desccription: If n is lower than 0, the function should
 * return -1 to indicate an error.
 * Factorial of 0 is 1.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n -= 1));
}
