#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: integers
 * Return: on success n % 10
 * Description: last digit finder
 */
int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = (n % 10) + 48;
		_putchar(x);
		return (n % 10);
	}
	else
	{
		x = ((1 * n) % 10) + 48;
		_putchar(x);
		return ((-1 * n) % 10);
	}
}
