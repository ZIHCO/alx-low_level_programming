#include <stdio.h>
/**
 * main - Random number generator
 * tell if a number is positive, negative or zero
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int putchar(int n);

	n = 0;
	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
