#include "main.h"

/**
 * print_alphabet - print lowercase all the letters
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
