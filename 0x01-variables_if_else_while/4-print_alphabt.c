#include <stdlib.h>
#include <stdio.h>
/**
 * main - print out the alphabets
 *
 * Return: 0
*/
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
