#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Description: prints every number from 0 to 9
 * save for 2, and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(48 + i);
	}
	_putchar('\n');
}
