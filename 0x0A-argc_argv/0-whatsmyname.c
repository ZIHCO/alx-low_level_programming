#include "main.h"
#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: single argument vector
 * Return: 0 on success
 * Description: If you rename the program, it will print
 * the new name, without having to compile it again
 * You should not remove the path before the
 * name of the program.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return 0;
}
