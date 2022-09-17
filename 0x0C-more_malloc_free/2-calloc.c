#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to an address.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem = NULL;
	unsigned int i;

	if (nmemb != 0 && size != 0)
	{
		mem = malloc((nmemb + 1) * size);
		if (mem == NULL)
			return (NULL);
		for (i = 0; i < nmemb * size; i++)
			mem[i] = 0;
		mem[nmemb * size] = '\0';
	}
	return (mem);
}
