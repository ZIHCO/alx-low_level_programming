#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: the difference in char
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
