#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Random number generator
 * tell if a number is positive, negative or zero
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int t; /* generates the last digit of n*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;
	if (t > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, t);
	else if (t == 0)
		printf("Last digit of %d is %d and is 0\n", n, t);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, t);
	return (0);
}
