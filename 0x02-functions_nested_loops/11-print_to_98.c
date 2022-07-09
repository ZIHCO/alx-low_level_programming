#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: n is initial count
 * Description: count all natural number from n to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
