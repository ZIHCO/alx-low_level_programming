#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * Return: 0 on success
 * Description: finds and prints the largest prime
 * factor of the number 612852475143
 */
int main(void)
{
	long i, gf;
	double num;

	num = sqrt(612852475143);
	for (i = 2; i <= num; i++)
	{
		if (612852475143 % i == 0)
		{
			gf = 612852475143 / i;
		}
	}
	printf("%lu\n", gf);
	return (0);
}	
