#ifndef _HEADER_
#define _HEADER_
#define NULL ((void *)0)
typedef __SIZE_TYPE__ size_t;

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
