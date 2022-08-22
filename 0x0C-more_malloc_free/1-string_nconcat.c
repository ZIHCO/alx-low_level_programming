#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: number of s2 char to append to s1
 * Return: a pointer to the new append string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int k = 0;
	char *str;
	unsigned int s2len = 1;

	str = malloc(sizeof(s1) + n);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
		k++;
	}
	i = 0;
	while (s2[i])
	{
		s2len++;
		i++;
	}
	i = 0;
	if (n < s2len)
	{
		while (i <= n)
		{
			if (i == n)
				str[k + i] = '\0';
			else
				str[k + i] = s2[i];
			i++;
		}
	}
	else
	{
		while (s2[i])
		{
			str[k + i] = s2[i];
			i++;
		}
	}
	return (str);
}
