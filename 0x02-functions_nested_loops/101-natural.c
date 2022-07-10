#include <stdio.h>
#include "main.h"

/**
 * sum_of_multiple2 - sum of the multiples of 3 or 5
 *
 * Description: calculate the sum of 2 integers passed as arguments
 */
void sum_of_multiple2(void)
{
	int sum3_5multiples, sum_multiples3, sum_multiples5, multiple3, multiple5;
	int i, j;

	multiple3 = 3;
	multiple5 = 5;
	sum_multiples3 = 0;
	sum_multiples5 = 0;
	i = 1;
	j = 1;
	while (multiple3 < 1024)
	{
		multiple3 *= i;
		sum_multiples3 += multiple3;
		i++;
	}
	while (multiple5 < 1024)
	{
		multiple5 *= j;
		sum_multiples5 += multiple5;
		j++;
	}
	sum3_5multiples = sum_multiples5 + sum_multiples3;
	printf("%d\n", sum3_5multiples);
}
