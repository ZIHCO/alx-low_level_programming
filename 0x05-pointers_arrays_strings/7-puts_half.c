#include "main.h"

/**
 * puts_half -  print the second half of the string
 * @str: take a string as an argument
 * Description: The function should print the second half of the string.
 * If the number of characters is odd, the function should print the last
 * n characters of the string, where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int i, j, k;

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
		j++;
	if (j % 2 != 0)
	{
		for (k = (j + 1) / 2; k <= j - 1; k++)
			_putchar(str[k]);
	}
	else
	{
		for (k = j / 2; k <= j - 1; k++)
			_putchar(str[k]);
	}
	_putchar('\n');
}
