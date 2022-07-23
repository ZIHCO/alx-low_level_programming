#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: single argument vector
 * Return: 0 on success
 * Description: All arguments should be printed, including
 * the first one.
 * Only print one argument per line, ending with a new line.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
