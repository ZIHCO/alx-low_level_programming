#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: takes an integer argument
 * Return: if true 1, otherwise 0
 * Description: similar to standard library 'isdigit'
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
