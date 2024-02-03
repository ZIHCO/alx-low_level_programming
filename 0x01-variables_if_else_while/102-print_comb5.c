#include <stdio.h>
/**
 * main - print out the alphabets
 *
 * Return: 0
*/
int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = i;
			if (j == 48)
				k = 48;
			while (k < 58)
			{
				if (i == 48 && j == 48 && k == 48)
					l = 49;
				else if (j > 48)
					l = j + 1;
				else
					l = 48;
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && l == 57 && k == 57 && j == 56)
						break;
					putchar(',');
					putchar(' ');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
