#include <stdlib.h>
#include <stdio.h>
/**
 * main - print out the decimal digits
 *
 * Return: 0
*/
int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
