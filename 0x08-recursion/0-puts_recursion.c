#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string argument
 * Description: The standard library provides a similar
 * function: puts. Run man puts to learn more.
 */
void _puts_recursion(char *s)
{
	char **p;

	p = &s;
	_putchar(**p);
	if (**p != '\0')
		_puts_recursion(s += 1);
	else
		_putchar('\n');
}
