#include "main.h"

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
	int j = 1;
	int i = 0;
	int number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			j *= -1;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			while (s[i] >= 48 && s[i] <= 57)
			{
				if (number == 0)
				{
					number += int_value(s[i]);
				}
				else
				{
					number *= 10;
					number += int_value(s[i]);
				}
				i++;
			}
			return (number * j);
		}
		i++;
	}
	return (0);
}


/**
 * int_value - convert char to int
 * @c: char
 * Return: int
 */

int int_value(char c)
{
	switch (c)
	{
		case (49):
			return (1);
		case (50):
			return (2);
		case (51):
			return (3);
		case (52):
			return (4);
		case (53):
			return (5);
		case (54):
			return (6);
		case (55):
			return (7);
		case (56):
			return (8);
		case (57):
			return (9);
		default:
			return (0);
	}
}
