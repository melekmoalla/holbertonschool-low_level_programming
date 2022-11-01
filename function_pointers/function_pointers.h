#ifndef INV_TREE_H
#define INV_TREE_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <string.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
