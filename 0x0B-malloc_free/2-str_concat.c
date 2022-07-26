#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - that concatenates two strings.
 * @s1: string as argument
 * @s2: string as argument
 * Return: on failure NULL, pointer to memory
 * Description: The returned pointer should point
 * to a newly allocated space in memory which
 * contains the contents of s1, followed by the
 * contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *ps;
	unsigned long i, j, l, k;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ps = malloc(sizeof(char) * (i + j) + 1);
	if (ps == NULL)
		return (NULL);
	while (k < i)
	{
		ps[k] = s1[k];
		k++;
	}
	ps[i] = ' ';
	while (l <= j)
	{
		ps[l + i] = s2[l];
		l++;
	}
	return (ps);
}
