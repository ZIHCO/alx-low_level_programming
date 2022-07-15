#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: take a string as argument
 * Description: take a string argument, and
 * print to standard output
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
