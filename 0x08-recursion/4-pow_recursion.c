#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base argument
 * @y: the exponent argument
 * Return: return x^y
 * Description: The standard library provides a different function:
 * pow. Run man pow to learn more.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
