#include <unistd.h>
#include <string.h>

/**
 * main - write with the unix write()
 * args - void
 * return - 1
 */

int main()
{
	char * str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, strlen(str));
	return (1);
}
