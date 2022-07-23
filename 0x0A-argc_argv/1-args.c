#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: single argument vector
 * Return: 0 on success
 * Description: print a number, followed by a new line
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", argc);
	return (0);
}
