#ifndef _HEADER_
#define _HEADER_

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int isbinary(const char *b);
int _strlen(const char *b);
void print_binary(unsigned long int n);
void rightshift(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int bitsize(unsigned long int n);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
