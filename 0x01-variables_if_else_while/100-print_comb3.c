#include <stdlib.h>
#include <stdio.h>
/**
 * main - print out the decimal digits
 *
 * Return: 0
*/
int main(void)
{
	int num1, num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			if (num1 != num2) {
				putchar(num1);
				putchar(num2);
				if (num1 != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
