#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: take a string as argument
 * Description: take a string as argument and print the reversal of the string
 */
void print_rev(char *s)
{
	int i, j, k;

	k = 0;
	for (j = 0; s[j] != '\0'; j++)
		k += 1;
	_putchar(k);
	for (i = k - 2; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
