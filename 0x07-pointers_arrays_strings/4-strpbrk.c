#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search
 * @accept: the string to search with
 * Return: a pointer to the search result in s, or null
 * Description: The standard library provides a similar
 * function: strpbrk. Run man strpbrk to learn more.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, m, n;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; accept[j] != '\0'; j++)
		;
	for (m = 0; m <= i; m++)
	{
		for (n = 0; n <= j; n++)
		{
			if (s[m] == accept[n])
			{
				s += m;
				return (s);
			}
		}
	}
	return ('\0');
}
