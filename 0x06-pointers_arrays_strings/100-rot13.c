#include "main.h"

/**
 * rot13 - rotate 13 encode
 * @s: string
 * Return: pointer
 */

char *rot13(char *s)
{
	int i, j;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letter13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (letter[j] == s[i])
			{
				s[i] = letter13[j];
				break;
			}
		}
	}
	return (s);
}
