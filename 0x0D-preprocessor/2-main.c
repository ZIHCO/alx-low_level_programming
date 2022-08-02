#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: on success 0
 * Description: prints the name of the file it was compiled
 * from, followed by a new line.
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
