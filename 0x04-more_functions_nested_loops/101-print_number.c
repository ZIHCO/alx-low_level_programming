#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer argument
 * Description: print integers using _putchar
 */
void print_number(int n)
{
	unsigned int i, power, digit, num;

	i = 1;
	power = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	num = n;
	while (num / 10 > 0)
	{
		num = num / 10;
		i++;
	}
	while (i > 1)
	{
		power *= 10;
		i--;
	}
	while (power >= 1)
	{
		digit = n / power;
		_putchar(48 + digit);
		n = n - (power * digit);
		power = power / 10;
	}
}
