#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string constant to search
 * @c: character to search for
 * Return: the pointer to the c in s, or NULL
 * Description: The standard library provides a similar
 * function: strchr. Run man strchr to learn more.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = (s + i);
			return (s);
		}
	}
	return ('\0');
}
