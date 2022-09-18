#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:  pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr = ptr;

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		else if (old_size < new_size)
		{
			free(ptr);
			newptr = malloc(new_size);
		}
	}
	return (newptr);
}
