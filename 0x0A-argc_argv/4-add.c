#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int x, i;
	int y;

	if (argv[1] == NULL)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!(argv[1][i] < 57 && argv[1][i] > 47))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!(argv[2][i] < 57 && argv[2][i] > 47))
		{
			printf("Error\n");
			return (1);
		}
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x + y);
	return (0);
}
