#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
