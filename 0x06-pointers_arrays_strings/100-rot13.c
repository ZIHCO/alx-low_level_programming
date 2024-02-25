#include "main.h"

/**
 * rot13 - rotate 13 encode
 * @s: string
 * Return: pointer
 */

char *rot13(char *s)
{
	int i, j;
	char letter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		       'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		       's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A',
		       'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		       'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
		       'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
	char letter13[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
			 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N',
			 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
			 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F',
			 'G', 'H', 'I', 'J', 'K', 'L', 'M', '\0'};


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (letter[j] == s[i])
				s[i] = letter13[j];
		}
	}
	return (s);
}
