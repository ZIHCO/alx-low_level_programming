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

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
