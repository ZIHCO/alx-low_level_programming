#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: n is initial count
 * Description: count all natural number from n to 98
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%2d, ", n);
		n++;
	}
	printf("%2d\n", n);
}
