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
	int num;

	letter = 'a';
	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
