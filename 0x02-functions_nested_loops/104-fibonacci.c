#include <stdio.h>

/**
 * main - print the first 98 fibonacci
 * Return: on success return 0
 * Description: print fibonacci starting with 1, 2
 */
int main(void)
{
	int i;
	float incremental, num;

	i = 1;
	num = 2;
	incremental = 1;
	while (i < 62)
	{
		if (i < 62)
		{
			printf("%.0f, ", incremental);
			incremental += num;
			printf("%.0f, ", num);
			num += incremental;
		}
		i++;
	}
	printf("%.0f, ", incremental);
	printf("%.0f\n", num);
	return (0);
}
