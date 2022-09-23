#include "lists.h"
#include <stdio.h>

/**
 * mystartup - run before main
 *
 * Return: void
 */
void mystartup(void)
{
	char *str;
	char *str1;

	str = "You're beat! and yet, you must allow, \n";
	str1 = "I bore my house upon my back!\n";
	printf("%s%s", str, str1);
}
