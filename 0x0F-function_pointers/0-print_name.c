#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: a pointer to a string
 * @f: a pointer to a function
 *
 * Description: take two pointers as arguments;
 * to a string and to a function. The string is printed
 * to suit the function call
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
