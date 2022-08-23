#ifndef _HEADER_
#define _HEADER_

#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef __SIZE_TYPE__ size_t;
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
