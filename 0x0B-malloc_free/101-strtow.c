#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words.
 * @str: a pointer to a string
 * Return: NULL on failure, a pointer to a pointer
 * Description: The function returns a pointer to
 * an array of strings (words)
 * Each element of this array should contain a
 * single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */
char **strtow(char *str)
{
	char **pstr;
	int wc; /* word count */
	int charlen; /* character length */
	int i, k, j, h, wlen;

	charlen = 0;
	h = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			charlen += 1;
		else if (str[i] == ' ' && str[i + 1] != ' ')
			wc += 1;
	}
	if (str[0] != ' ')
		wc += 2;
	if (charlen == 0)
		return (NULL);
	pstr = malloc(sizeof(char *) * wc);
	if (pstr == NULL)
		return (NULL);
	for (j = 0; str[j] && h < wc - 1; j++)
	{
		if (str[j] != ' ')
		{
			for (wlen = 0; str[j] != ' '; j++, wlen++)
			{
				if (str[j] == '\0')
					break;
			}
			pstr[h] = malloc(sizeof(char) * wlen + 1);
			for (i = j - wlen, k = 0; i < j; i++, k++)
				pstr[h][k] = str[i];
			pstr[h][k + 1] = '\0';
			h += 1;
		}
	}
	return (pstr);
}
