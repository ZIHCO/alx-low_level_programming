#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - check string if palindrome
 * @s: string
 * Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	char *reversed_s;
	char *reversed;
	int l;

	if (s)
	{
		l = length(0, s);
		reversed_s = malloc(sizeof(char *) * l + 1);
		if (reversed_s == NULL)
			return (0);
		reversed = reversal(0, s, reversed_s);
		return (palindrome_check(0, s, reversed));
	}
	else if (length(0, s) == 0)
		return (1);
	return (0);
}


/**
 * palindrome_check - test string
 * @i: counter
 * @newstr: string reversed
 * @string: str to test
 * Return: 1 0r 0
 */

int palindrome_check(int i, char *newstr, char *string)
{
	if (i == (length(0, string)))
		return (1);

	if (newstr[i] - string[i] != 0)
		return (0);
	i++;
	return (palindrome_check(i, newstr, string));
}

/**
 * length - return length of a string
 * @s: string
 * @i: int
 * Return: integer
 */

int length(int i, char *s)
{
	if (s[i] == '\0')
		return (i);
	i++;
	return (length(i, s));
}

/**
 * strncomp - compare two string if identical
 * @s1: string one
 * @s2: string two
 * @i: integer
 * Return: integer value
 */

int strncomp(int i, char *s1, char *s2)
{
	if (s1[i] - s2[i] == 0 && i == length(0, s1) - 1)
		return (0);
	if (s1[i] - s2[i] != 0)
		return (s1[i] - s2[i]);
	i++;
	return (strncomp(i, s1, s2));
}

/**
 * reversal - reverse this string
 * @i: counter
 * @s: string
 * @s1: malloc
 * Return: gnirts
 */

char *reversal(int i, char *s, char *s1)
{
	if (i == length(0, s))
	{
		s1[i] = '\0';
		return (s1);
	}
	s1[i] = s[(length(0, s) - i - 1)];
	i++;
	return (reversal(i, s, s1));
}
