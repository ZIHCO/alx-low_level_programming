#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*ps)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	ps = get_op_func(argv[2]);
	if (!ps)
	{
		printf("Error\n");
		exit (99);
	}
	printf("%d\n", ps(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
