#include <stdio.h>

/**
 * main - sum of the multiples of 3 or 5
 * Return: on success return 0
 * Description: calculate the sum of 2 integers passed as arguments
 */
int main(void)
{
	int sum3_5multiples, sum_multiples3, sum_multiples5, multiple3, multiple5;

	sum_multiples3 = 0;
	sum_multiples5 = 0;
	for (multiple3 = 3; multiple3 < 1024; multiple3 += 3)
	{
		sum_multiples3 += multiple3;
	}
	for ( multiple5 = 5; multiple5 < 1024; multiple5 += 5)
	{
		if (multiple5 % 3 != 0)
			sum_multiples5 += multiple5;
	}
	sum3_5multiples = sum_multiples5 + sum_multiples3;
	printf("%d\n", sum3_5multiples);
	return (0);
}
