#include "main.h"
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
	char p;
	long int bal, coin;

	bal = 0;
	coin = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);
	if (p >= 25)
	{
		if (p % 25 == 0)
		{
			coin = p / 25;
		}
		else
		{
			coin = p / 25;
			bal = p % 25;
		}
	}
	p = p % 25;
	if (p >= 10)
	{
		if (p % 10 == 0 && bal == 0)
		{
			coin = p / 10;
		}
		else if (bal % 10 == 0 && bal != 0)
		{
			coin += bal / 10;
		}
		else
		{
			coin += p / 10;
			bal = p % 10;
		}
	}
	p = p % 10;	
	if (p >= 5)
	{
		if (p % 5 == 0 && bal == 0)
		{
			coin = p / 5;
		}
		else if (bal % 5 == 0 && bal != 0)
		{
			coin += bal / 5;
		}
		else
		{
			coin += p / 5;
			bal = p % 5;
		}
	}
	p = p % 5;
	if (p >= 2)
	{
		if (p % 2 == 0 && bal == 0)
		{
			coin = p / 2;
		}
		else if (bal % 2 == 0 && bal != 0)
		{
			coin += bal / 2;
		}
		else
		{
			coin += p / 2;
			bal = p % 2;
		}
	}
	p = p % 2;
	if (p >= 1)
		coin += 1;
	printf("%ld\n", coin);
	return (0);
}
