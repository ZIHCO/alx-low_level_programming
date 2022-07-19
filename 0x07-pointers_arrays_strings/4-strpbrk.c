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
	int i, j, n, m, k;
	char *ps;

	k = 0;
	for (i = 0; s[i]; i++)
		;
	for (j = 0; accept[j]; j++)
		;
	for (n = 0; n <= i; n++)
	{
		for (m = 0; m <= j; m++)
		{
			if (s[n] == accept[m] && k < 1)
			{
				ps = (s + n);
				k++;
			}
		}
	}
	return (ps);
}
