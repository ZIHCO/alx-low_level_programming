#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *str);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
int seperator_identifier(int n, char *s);
char *leet(char *s);
char *rot13(char *s);
void print_number(int n);
int _putchar(char s);

#endif
