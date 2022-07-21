#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: points to a string
 * Description: print a given string in reversal.
 * using recursion rather than looping
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
