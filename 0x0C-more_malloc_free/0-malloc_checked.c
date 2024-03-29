#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned integer argument
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *store;

	store = malloc(b);
	if (store == NULL)
		exit(98);
	return (store);
}
