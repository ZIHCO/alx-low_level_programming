#include <stdio.h>

/**
 * main - print the first 50 fibonacci
 * Return: on success return 0
 * Description: print fibonacci starting with 1, 2
 */
int main(void)
{
	int i;
	float incremental, num;

	i = 1;
	num = 1;
	incremental = 0;
	printf("%.0f, ", num);
	while (i < 49)
	{
		++i;
		incremental += num;
		num += incremental;
		if (incremental != 1)
			printf("%.0f, ", incremental);
		printf("%.0f, ", num);
	}
	incremental += num;
	num += incremental;
	printf("%.0f, ", incremental);
	printf("%.0f", num);
	printf("\n");
	return (0);
}
