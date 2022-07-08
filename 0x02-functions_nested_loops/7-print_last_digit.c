#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: integers
 * Return: on success n % 10
 * Description: last digit finder
 */
int print_last_digit(int n)
{
	int x, t;

	if (n >= 0)
	{
		x = n % 10;
	}
	else
	{
		x = ((n *= (-1)) % 10);
	}
	if (x < 0)
		x = -x;
	t = 48 + x;
	_putchar(t);
	return (x);
}
