#include <stdio.h>

/**
 * main - print fibonacci numbers less 4000000
 * Return: on success return 0
 * Description: print fibonacci starting with 1, 2
 */
int main(void)
{
	long int incremental, num;

	num = 2;
	incremental = 1;
	while (num <= 4000000)
	{
		if (num + incremental < 4000000)
		{
			printf("%ld, ", incremental);
			incremental += num;
			printf("%ld, ", num);
			num += incremental;
		}
		else
		{
			printf("%ld, ", incremental);
			incremental += num;
			printf("%ld\n", num);
			num += incremental;
		}
	}
	return (0);
}
