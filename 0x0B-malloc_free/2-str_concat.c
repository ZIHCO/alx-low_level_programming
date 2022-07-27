#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	k = 0;
	l = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	j = strlen(s2);
	ps = malloc(sizeof(char) * (i + j) + 1);
	if (ps == NULL)
		return (NULL);
	while (k < i)
	{
		ps[k] = s1[k];
		k++;
	}
	if (s1 != NULL && s2 != NULL)
		ps[i] = ' ';
	while (l <= j)
	{
		ps[l + i] = s2[l];
		l++;
	}
	return (ps);
}
