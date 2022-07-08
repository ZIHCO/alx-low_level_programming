#include "main.h"

/**
 * print_sign - print the sign of arg
 * @n: n is a number
 * Return: on success 1, 0 , -1
 * Description: check if a number is +, 0, -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
