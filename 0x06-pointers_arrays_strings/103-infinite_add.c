#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: pointer to char
 * @n2: pointer to char
 * @r: pointer to char
 * @size_r: int
 * Return: pointer to char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int length_n1 = length_str(n1);
	int length_n2 = length_str(n2);
	int temp_sum, longer_str, count;
	int shift_digit = 0;

	if (length_n1 > length_n2)
		longer_str = length_n1;
	else
		longer_str = length_n2;
	if (longer_str < size_r - 1)
	{
		for (count = 0; count < longer_str + 1; count++)
		{
			if (count + 1 == longer_str + 1)
			{
				*(r + count) = shift_digit + 48;
				break;
			}
			if (count < length_n1 && count < length_n2)
				temp_sum = (n1[length_n1 - count - 1] +
					   n2[length_n2 - count - 1] - 96 + shift_digit);
			else if (length_n1 > length_n2)
				temp_sum = (n1[length_n1 - count - 1] + shift_digit - 48);
			else if (length_n2 > length_n1)
				temp_sum = (n2[length_n2 - count - 1] - 48 + shift_digit);
			*(r + (count)) = (temp_sum % 10) + 48;
			shift_digit = temp_sum / 10;
		}
	}
	else
	{
		return (0);
	}
	*(r + count + 1) = '\0';
	r = reverse_str(r);
	if (r[0] == 48)
		r = (r + 1);
	return (r);
}


/**
 * length_str - length of string
 * @str: pointer to string
 * Return: an integer value
 */

int length_str(char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count += 1;
	return (count);
}


/**
 * reverse_str - reverse string
 * @str: pointer to string
 * Return: a pointer
 */

char *reverse_str(char *str)
{
	int length_of_str = length_str(str);
	char temp;
	int count = 0;

	while (count < length_of_str / 2)
	{
		temp = *(str + count);
		*(str + count) = *(str + length_of_str - count - 1);
		*(str + length_of_str - count - 1) = temp;
		count++;
	}
	return (str);
}
