#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter on
 * each element of an array.
 * @array: the array to iterate from
 * @size: size of array
 * @action: pointer to the function to call
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
