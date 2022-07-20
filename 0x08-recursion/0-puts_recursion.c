#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string argument
 * Description: The standard library provides a similar
 * function: puts. Run man puts to learn more.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if  (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s += 1);
}
