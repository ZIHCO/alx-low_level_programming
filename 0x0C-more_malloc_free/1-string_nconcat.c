#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: number of s2 char to append to s1
 * Return: a pointer the new append or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int k = 0;
	char *str;

	if (s1 == NULL && s2 != NULL)
		str = emptys1(s2, n);
	else if (s1 != NULL && s2 == NULL)
	{
		str = _malloc(_strlen(s1) + 1);
		for (k = 0; s1[k] && str != NULL; k++)
			str[k] = s1[k];
		str[k] = '\0';
	}
	else if (s1 != NULL && s2 != NULL)
	{
		if (n > (_strlen(s2)))
		{
			str = _malloc((_strlen(s1) + _strlen(s2) + 1));
			for (i = 0; (i < (_strlen(s1) + _strlen(s2))) && str != NULL; i++)
			{
				if (i < (_strlen(s1)))
					str[i] = s1[i];
				else
				{
					(str[i] = s2[k]);
					k++;
				}
			}
			str[i] = '\0';
		}
		else
			str = smaller_n(s1, s2, n);
	}
	else
	{
		str = _malloc(n);
		str[k] = '\0';
	}
	return (str);
}

/**
 * _malloc - allocate memory
 * @t: sizeof data
 * Return: NULL or an empty memory space
 */
char *_malloc(unsigned int t)
{
	char *mem;

	mem = malloc(sizeof(char) * t);
	if (mem == NULL)
		return (NULL);
	return (mem);
}

/**
 * emptys1 - null s1
 * @str: pointer to a string
 * @n: number of char to concatenate
 * Return: pointer to the concatenate string
 */
char *emptys1(char *str, unsigned int n)
{
	char *newstr = NULL;
	unsigned int k;

	if (n < (_strlen(str)))
	{
		newstr = _malloc((n + 1));
		for (k = 0; (k < n) && newstr != NULL; k++)
			newstr[k] = str[k];
		newstr[k] = '\0';
	}
	else
	{
		newstr = _malloc(_strlen(str) + 1);
		for (k = 0; str[k] && newstr != NULL; k++)
			newstr[k] = str[k];
		newstr[k] = '\0';
	}
	return (newstr);
}

/**
 * _strlen - string length
 * @str: string
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * smaller_n - return a pointer to a newstr
 * @n: number of char to concatenate
 * @s1: string
 * @s2: string
 * Return: newstr
 */
char *smaller_n(char *s1, char *s2, unsigned int n)
{
	char *newstr = _malloc((_strlen(s1) + n + 1));
	int k = 0;
	unsigned int i;

	if (newstr != NULL)
	{
		for (i = 0; (i < (_strlen(s1) + n)); i++)
		{
			if (i < (_strlen(s1)))
				newstr[i] = s1[i];
			else
			{
				(newstr[i] = s2[k]);
				k++;
			}
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
