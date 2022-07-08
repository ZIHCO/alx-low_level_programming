#include "main.h"

/**
 * _islower - lowercase letter checker
 * @c: c is an int
 * Return: 1 or 0
 * Description: checks to see if an argument is a lowercase letter.
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
