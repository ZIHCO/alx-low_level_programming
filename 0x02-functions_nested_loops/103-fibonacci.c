#include <stdio.h>

/**
 * main - print fibonacci numbers less 4000000
 * Return: on success return 0
 * Description: print fibonacci starting with 1, 2
 */
int main(void)
{
	long int incremental, num, sum_of_even;

	num = 2;
	incremental = 1;
	sum_of_even = 0;
	while (num <= 4000000)
	{
		if (num + incremental < 4000000)
		{
			incremental += num;
			num += incremental;
		}
		else
		{
			incremental += num;
			num += incremental;
		}
		if (incremental % 2 == 0)
			sum_of_even += incremental;
		if (num % 2 == 0)
			sum_of_even += num;
	}
	printf("%ld\n", sum_of_even);
	return (0);
}
