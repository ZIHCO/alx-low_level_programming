#include "main.h"

/**
 *  main - calls my other functions
 *
 *
 * return -zero(0)
 */

int main(void)
{
	int r;

	r = _islower(100);
	_putchar(r + '0');
	r = _islower('t');
	_putchar(r + '0');
	r = _islower('T');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
