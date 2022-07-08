#include "main.h"

/**
 * _3-islower - lowercase letter checker
 * (int c)
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
