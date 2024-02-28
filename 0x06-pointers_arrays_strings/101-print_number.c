#include "main.h"

/**
 * print_number - prints integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int power10 = 1;
	unsigned int new;

	if (n < 0)
	{
		new = -1 * n;
		_putchar('-');
	}
	else
	{
		new = n;
	}
	while (power10 <= new / 10)
		power10 *= 10;

	while (power10 > 0)
	{
		_putchar((new / power10) + 48);
		new = new % power10;
		power10 /= 10;
	}
}
