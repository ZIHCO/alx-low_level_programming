#include "main.h"

/**
 * print_number - prints integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int power10 = 10;
	int new;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n >= 0 && n < 10)
	{
		_putchar(48 + n);
	}
	else
	{
		while (power10 <= n / 10)
			power10 *= 10;

		new = n;
		while (power10 > 0)
		{
			_putchar((new / power10) + 48);
			new = new % power10;
			power10 /= 10;
		}
	}
}
