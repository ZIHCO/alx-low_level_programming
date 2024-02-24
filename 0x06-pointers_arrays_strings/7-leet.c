#include "main.h"

/**
 * leet - 1337 encoding
 * @s: pointer to a string
 * Return: pointer
 */

char *leet(char *s)
{
	int i, j;
	char letter[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char number[] = {52, 51, 48, 55, 49, '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if ((letter[j] == s[i]) || (s[i] == letter[j] - 32))
				s[i] = number[j];
		}
	}
	return (s);
}
