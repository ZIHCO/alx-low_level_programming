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
	int x, i, j;
	int y, sum;

	sum = 0;
	if (argv[1] == NULL)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] < 58 && argv[i][j] > 47))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
