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
	int x, i;
	int y;
	unsigned int j, sum;
	char *p;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			for (j = 0; j < strlen(p); j++)
			{
				if (p[j] > 57 || p[j] < 48)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(p);
			p++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
