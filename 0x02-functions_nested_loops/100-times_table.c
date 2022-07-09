#include "main.h"

/**
 * print_times_table - prints the n times table
 *@n: takes an integer argument in (0, 15)
 * Description: prints the multiplications upto the number 9
 */
void print_times_table(int n)
{
	int num1, num2, product, hundred, tens, unit;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				product = num1 * num2;
				if (product > 9)
				{
					if (product > 99)
					{
						hundred = product / 100;
						tens = (product % 100) / 10;
						unit = product % 10;
						_putchar('0' + hundred);
						_putchar('0' + tens);
						_putchar('0' + unit);
					}
					else
					{
						tens = product / 10;
						unit = (product) % 10;
						_putchar('0' + tens);
						_putchar('0' + unit);
					}
					if (num2 < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					if (num2 == 0)
					{
						_putchar(48);
					}
					else
					{
						_putchar(' ');
						_putchar('0' + product);
					}
					if (num2 < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
