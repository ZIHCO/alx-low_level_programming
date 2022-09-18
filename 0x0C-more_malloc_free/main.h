#ifndef _HEADER_
#define _HEADER_

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *emptys1(char *str, unsigned int n);
char *_malloc(unsigned int t);
unsigned int _strlen(char *str);
char *smaller_n(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
