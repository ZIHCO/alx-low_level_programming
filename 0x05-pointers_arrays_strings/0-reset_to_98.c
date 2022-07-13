#include "main.h"

/**
 * reset_to_98 - update the value of an integer via the pointer
 * @*n: is apointer to an integer
 * Description: takes a pointer to an integer as parameter, and update
 * the value it points to to 98
 */

void reset_to_98(int *n)
{
	*n = 98;
	return;
}
