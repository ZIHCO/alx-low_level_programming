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

	i = 0;
	wc = 0;
	charlen = 0;
	wlen = 0;
	j = 0;
	h = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			charlen += 1;
		else if (str[i] == ' ' && str[i + 1] != ' ')
			wc += 1;
		i++;
	}
	pstr = malloc(sizeof(char *) * wc + 1);
	while (str[j])
	{
		if (str[j] != ' ')
		{
			while (str[j] != ' ')
			{
				wlen += 1;
				j++;
			}
			pstr[h] = malloc(sizeof(char) * wlen + 1);
			for (i = j - wlen; i <= j; i++)
			{
				pstr[h][k] = str[i];
				k++;
			}
			pstr[h][k] = '\0';
			wlen = 0;
			h++;
		}
		j++;
		k = 0;
	}
	pstr[h] = '\0';
	return (pstr);
}
