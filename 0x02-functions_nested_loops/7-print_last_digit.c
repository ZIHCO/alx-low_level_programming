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
		return (n % 10);
	else
		return ((-1 * n) % 10);
}
