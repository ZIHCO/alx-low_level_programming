#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: single argument vector
 * Return: 0 on success, 1 if other symbol argument passed
 * Description: If no number is passed to the program, print 0,
 * followed by a new line.
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1.
 * You can assume that numbers and the addition of all the
 * numbers can be stored in an int.
 */
int main(int argc, char *argv[])
{
	long int coin, p;

	coin = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);
	while (p != 0)
	{
		while (p >= 25)
		{
			p = p - 25;
			coin++;
		}
		while (p >= 10)
		{
			p = p - 10;
			coin++;
		}
		while (p >= 5)
		{
			p = p - 5;
			coin++;
		}
		while (p >= 2)
		{
			p = p - 2;
			coin++;
		}
		if (p == 1)
		{
			coin += 1;
			break;
		}
	}
	printf("%ld\n", coin);
	return (0);
}
