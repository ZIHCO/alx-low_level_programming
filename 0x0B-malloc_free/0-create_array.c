#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of memory to alocate
 * @c: the char to assign to memory
 * Return: NULL or a pointer to the array
 * Description: Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pc;
	unsigned int i;

	if (size == 0)
		return ('\0');
	pc = malloc(sizeof(*pc) * size);
	i = 0;
	while (i < size)
	{
		pc[i] = c;
		i++;
	}
	if (pc == '\0')
		return ('\0');
	else
		return (pc);
}
