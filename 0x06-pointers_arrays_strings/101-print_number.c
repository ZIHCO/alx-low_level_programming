#include "main.h"

/**
 * print_number - prints integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int power10 = 10;
	int new = n;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (n > power10)
		power10 *= 10;

	while (new != 0)
	{
		_putchar((new / power10 + 48));
		new = new % power10;
		power10 /= 10;
	}
}
