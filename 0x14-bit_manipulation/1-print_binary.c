#include "main.h"
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number.
 * @n: an integer
 *
 * Description: use only bitwise operators to print a binary
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	rightshift(n);
}

/**
 * rightshift - ....
 * @n: .....
 * Return: void
 */
void rightshift(unsigned long int n)
{
	if (n == 0)
		return;
	rightshift(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
