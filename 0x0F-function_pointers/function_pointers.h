#ifndef _ALX_
#define _ALX_
#include <stddef.h>

int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _ALX_ */
