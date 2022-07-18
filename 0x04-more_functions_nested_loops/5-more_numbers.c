#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Description: Prototype: void more_numbers(void);
 * You can only use _putchar three times in your code
 */
void more_numbers(void)
{
	int i, j, l, k;

	l = 0;
	while (l <= 9)
	{
		k = 0;
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j <= 9 && k <= 14; j++)
			{
				if (i != 0)
					_putchar(i + 48);
				_putchar(j + 48);
				k++;
			}
		}
	_putchar('\n');
	l++;
	}
}
