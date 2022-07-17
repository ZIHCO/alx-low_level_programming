#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: string as an argument
 * Return: 0 or an number within a string
 * Description: The number in the string can be
 * preceded by an infinite number of characters.
 * You need to take into account all the - and +
 * signs before the number.
 * If there are no numbers in the string,
 * the function must return 0.
 * You are not allowed to use long
 * You are not allowed to declare new variables
 * of “type” array.
 * You are not allowed to hard-code special values.
 */
int _atoi(char *s)
{
	int len, i, digits, multiplier, k, sum, sign;
	int n; /* the power of 10 to multiply by */
	int num; /* length before the first number */

	n = 0;
	sum = 0;
	multiplier = 1;
	sign = 0;
	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (num = 0; !(s[num] >= '0' && s[num] <= '9'); num++)
	{
		if (s[num] == '-')
			sign++;
	}
	for (i = num + 1; s[i] >= '0' && s[i] <= '9'; i++)
		n += 1;
	if (len - num == 0)
	{
		return (0);
	}
	else
	{
		for (k = num; n >= 0; k++)
		{
			digits = s[k] - 48;
			for (i = 1; n >= i; i++)
				multiplier *= 10;
			digits = digits * multiplier;
			sum += digits;
			n--;
			multiplier = 1;
		}
		if (sign % 2 != 0)
			sum = -1 * sum;
		return (sum);
	}
}
