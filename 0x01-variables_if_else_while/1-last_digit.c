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
	int t;
	char strn[4];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprint(strn, "%d", n);
	export t = strn[1];
	printf("%d %s\n", n, strn);
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
