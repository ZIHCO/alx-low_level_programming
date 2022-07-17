#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: takes an integer argument
 * Return: 1 if c is uppercase, 0 otherwise
 * Description: a function that checks for uppercase character.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
