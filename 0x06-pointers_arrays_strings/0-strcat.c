#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the appended to
 * @src: source to append from
 * Return: a pointer to the new src
 * Description: This function appends the src string to the dest
 * string, overwriting * the terminating null byte (\0) at the
 * end of dest, and then adds a terminating null byte
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;
	char *p;

	j = 1;
	p = &dest[0];
	for (i = 1; dest[i] != '\0'; i++)
	{
		*(p + i) = *(dest + i);
		j++;
	}
	for (k = 0; src[k] != '\0'; k++)
		(dest[j + k]) = src[k];
	return (dest);
}
