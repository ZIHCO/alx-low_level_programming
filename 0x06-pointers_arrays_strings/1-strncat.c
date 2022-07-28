#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: destination to hold the concat
 * @src: source to concat from
 * @n: number of byte
 * Return: a pointer to the resulting string dest
 * Description: The standard library provides a similar
 * function: strncat. Run man strncat to learn more.
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, i, k;

	k = 0;
	for (i = 0; dest[i] != '\0'; i++)
		k += 1;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[k + j] = src[j];
	}
	return (dest);
}
