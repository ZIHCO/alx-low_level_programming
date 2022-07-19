#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: the memory area to copy to
 * @src: the memory source to copy from
 * @n: the number of element to copy
 * Return: a pointer to the dest
 * Description: The standard library provides a similar
 * function: memcpy. Run man memcpy to learn more.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
