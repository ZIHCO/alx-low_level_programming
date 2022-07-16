#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: takes a string argument
 * Description: prints every other character of a string,
 * starting with the first character
 */
void puts2(char *str)
{
	int i, j, k;

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
		j++;
	for (k = 0; k <= j - 1; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
