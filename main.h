#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct prints - struct function.
 *
 * @c: input.
 *
 * @function: input functions.
 */
typedef struct prints
{
	char c;
	int (*function)(va_list);
} prints_c;

int _putchar(char c);
int main (void);
int (*format_function(char *s))(va_list);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_str(va_list args);
#endif
