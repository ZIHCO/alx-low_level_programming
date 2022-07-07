#include "main.h"

/**
 * print_alphabet_x10 - print lowercase all the letters
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		int letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	
		_putchar('\n');
	}
}
