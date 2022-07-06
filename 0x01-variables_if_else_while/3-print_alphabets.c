#include <stdlib.h>
#include <stdio.h>
/**
 * main - print out the alphabets
 *
 * Return: 0
*/
int main(void)
{
	char letter, letter_u;

	letter = 'a';
	letter_u = 'A';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letter_u <= 'Z')
	{
		putchar(letter_u);
		letter_u++;
	}
	putchar('\n');

	return (0);
}
