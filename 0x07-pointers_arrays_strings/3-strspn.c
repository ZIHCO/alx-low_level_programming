#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to check for accepted bytes
 * @accept: string to check with
 * Return: the number of bytes from accept
 * Description: The standard library provides a similar
 * function: strspn. Run man strspn to learn more.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, j;

	j = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				j += 1;
		}
	}
	return (j);
}
