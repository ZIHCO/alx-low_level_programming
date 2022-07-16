#include "main.h"

/**
 * rev_string - print a string in reverse order
 * @s: take a string as argument
 * Description: take a string as argument and print the reversal of the string
 */
void rev_string(char *s)
{
	int i, j, k;
	char tmp;

	k = 0;
	for (j = 0; s[j] != '\0'; j++)
		k += 1;
	for (i = k - 1; i >= k / 2; i--)
	{
		tmp = s[i];
		s[i] = s[k - i - 1];
		s[k - i - 1] = tmp;
	}
	_putchar('\n');
}
