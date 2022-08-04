#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the array to iterate through
 * @size: size of the array
 * @cmp: compare function
 * Return: -1, 0 or index of an element\
 * Description: int_index returns the index of the first
 * element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL && size <= 0)
		return (-1);
	while (cmp(array[i]) == 0)
	{
		if (i + 1 == size)
			return (-1);
		i++;
	}
	return (i);
}

