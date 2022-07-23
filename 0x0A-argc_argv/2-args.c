#include "main.h"
#include <stdio.h>
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
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
