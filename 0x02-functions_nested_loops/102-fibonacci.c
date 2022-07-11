#include <stdio.h>

/**
 * main - print the first 50 fibonacci
 * Return: on success return 0
 * Description: print fibonacci starting with 1, 2
 */
int main(void)
{
	int i;
	long int incremental, num;

	i = 1;
	num = 2;
	incremental = 1;
	while (i <= 25)
	{
		if (i < 25)
		{
			printf("%ld, ", incremental);
			incremental += num;
			printf("%ld, ", num);
			num += incremental;
		}
		else
		{
			printf("%ld, ", incremental);
			printf("%ld\n", num);
		}
		++i;
	}
	return (0);
}
