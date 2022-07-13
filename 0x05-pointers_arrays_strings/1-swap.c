#include "main.h"

/**
 * swap_int - swap the value of the arguments
 * @a: is a pointer to an integer
 * @b: is a pointer to an integer
 * Description: swap_int swaps the value of both arguments
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
