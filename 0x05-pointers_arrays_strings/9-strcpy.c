#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination of the returned string
 * @src: source of the string to be copied
 * Return: *dest
 * Description: copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, k;
	char *p;

	j = 0;
	p = dest;
	for (i = 0; src[i] != '\0'; i++)
		j++;
	for (k = 0; k <= j; k++)
		dest[k] = src[k];
	return (p);
}
