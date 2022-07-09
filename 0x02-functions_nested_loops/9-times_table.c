#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the multiplications upto the number 9
 */
void times_table(void)
{
	int num1, num2;
	int product, tens, unit;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{

			product = num1 * num2;
			if (product > 9)
			{
				tens = product / 10;
				unit = (product) % 10;
				_putchar('0' + tens);
				_putchar('0' + unit);
				if (num2 < 9)
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
				if (num2 < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
