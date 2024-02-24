#include "main.h"

/**
 * cap_string - lowercase letters to uppercase
 * @s: pointer to string
 * Return: pointer
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 97 && s[i] <= 122))
			s[i] = s[i] - 32;
		else if ((s[i] >= 97 && s[i] <= 122) && seperator_identifier((i - 1), s))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}


/**
 * seperator_identifier - identifiers a seperator
 * @s: a pointer
 * @n: integer
 * Return: 1 or 0
 */

int seperator_identifier(int n, char *s)
{
	switch (s[n])
	{
		case ' ':
			return (1);
		case '\n':
			return (1);
		case '\t':
			return (1);
		case ',':
			return (1);
		case ';':
			return (1);
		case '.':
			return (1);
		case '!':
			return (1);
		case '?':
			return (1);
		case '"':
			return (1);
		case '(':
			return (1);
		case ')':
			return (1);
		case '{':
			return (1);
		case '}':
			return (1);
	}
	return (0);
}
