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
	int m, n;

	for (m = 0; s[m]; m++)
	{
		for (n = 0; accept[n]; n++)
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
