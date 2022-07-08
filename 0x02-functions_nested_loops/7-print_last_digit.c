#include "main.h"

/**
 * print_last_digit - print the last digit of a number 
 * @n: integers
 * Return: on success n % 10
 * Description: last digit finder
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		int y = n % 10;
		_putchar(y);
		return (n % 10);
	}
	else
	{
		int x = (-1 * n) % 10;
		_putchar(x);
		return ((-1 * n) % 10);
	}
}
