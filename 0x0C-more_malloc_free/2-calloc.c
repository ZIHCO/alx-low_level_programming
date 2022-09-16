#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem = NULL;

	if (nmemb != 0 && size != 0)
	{
		mem = malloc((nmemb + 1) * size);
		if (mem == NULL)
			return (NULL);
		mem[nmemb] = '\0';
	}
	return (mem);
}
