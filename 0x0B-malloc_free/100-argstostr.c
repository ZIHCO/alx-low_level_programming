#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of
 * your program.
 * @ac: argcount
 * @av: argvalue
 * Return: on fail NULL, pointer to char
 * Description: Each argument should be followed by a \n
 * in the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l, avlen;
	char *pav;

	avlen = 0;
	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			avlen += 1;
		}
	}
	printf("%d", avlen);
	if (ac == 0 || av == NULL)
		return (NULL);
	pav = malloc((sizeof(char) * avlen) + ac + 1);
	if (pav == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			pav[l] = av[i][k];
			l += 1;
		}
		pav[l] = '\n';
		l++;
	}
	pav[l] = '\0';
	return (pav);
}
