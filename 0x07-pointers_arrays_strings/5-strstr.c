#include "main.h"

/**
 * _strstr - fill up a memory space
 * @haystack: 8.35 pointer
 * @needle:  pointer
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	int length_str = length_needle(needle);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(needle) == *(haystack + i))
		{
			for (j = 0; *(needle + j) != '\0'; j++)
			{
				if (*(needle + j) != *(haystack + i + j))
					break;
				else if (j == length_str - 1)
					return (haystack + i);
			}
		}
	}
	return ('\0');
}


/**
 * length_needle - length of str
 * @str: string
 * Return: integer
 */

int length_needle(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		continue;
	return (i);
}
