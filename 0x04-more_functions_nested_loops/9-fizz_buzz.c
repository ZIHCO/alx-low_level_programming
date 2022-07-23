#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * Return: 0 on success
 * Description: for multiples of three print Fizz instead of
 * the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five
 * print FizzBuzz.
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	return (0);
}
