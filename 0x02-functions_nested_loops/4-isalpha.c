#include "main.h"

/**
 * _isalpha - alphabets checker
 * @c: c is an alphabet letter
 *
 * Return: on success 1
 * On failure return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
