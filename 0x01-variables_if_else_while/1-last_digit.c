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
		printf("Last digit of %d is greater than 5\n", n);
	else if (n == 0)
                printf("Last digit of %d is greater than 5\n", n);
	else
                printf("Last digit of %d is greater than 5\n", n);                                                                                   
	return (0);
}
