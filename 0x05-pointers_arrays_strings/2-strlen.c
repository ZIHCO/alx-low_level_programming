#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: accept a string as argument
 * Return: return the length of the string
 * Description: This function takes the a string argument,
 * and return it length
 */
int _strlen(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j += 1;
	}
	return (j);
}
