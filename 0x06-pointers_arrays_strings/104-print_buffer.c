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
	int i = 0;
	int count2 = 0;
	int count10 = 0;

	while (i < size)
	{
		printf("%p: ", &b[i]);
		for (count10 = 0, count2 = 0; count10 < 10; count10++)
		{
			printf("%.2x", *(b + i + count10));
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
			if (*(b + count10 + i) != '\0' &&
			    *(b + i + count10) != '\1' &&
			    *(b + i + count10) != '\2' &&
			    *(b + i + count10) != '\3' &&
			    *(b + i + count10) != '\4' &&
			    *(b + i + count10) != '\5' &&
			    *(b + i + count10) != '\6' &&
			    *(b + i + count10) != '\7' &&
			    *(b + i + count10) != '\n')
				printf("%c", *(b + i + count10));
			else
				printf("%c", '.');
			if (count10 == 9)
				printf("\n");
		}
		i += count10;
	}
	if (size <= 0)
		printf("\n");
}
