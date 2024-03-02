#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print buffer
 * @b: pointe
 * @size: int
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, count2, count10;

	if (size <= 0 || !b)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (count10 = 0, count2 = 0; count10 < 10; count10++)
		{
			((i + count10 > size - 1) ? printf("%2c", ' ') :
			 printf("%.2x", *(b + i + count10)));
			if (count2 == 1)
			{
				printf("%c", ' ');
				count2 = 0;
			}
			else
			{
				count2++;
			}
		}
		for (count2 = 0, count10 = 0; count10 < 10; count10++)
		{
			(*(b + count10 + i) >= ' ' ? printf("%c", *(b + i + count10)) :
			 printf("%c", '.'));
			if (count10 == 9 || i + count10 == size - 1)
				printf("\n");
			if (i + count10 == size - 1)
				break;
		}
	}
}
