#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strig by a new line.
 * @separator: The string to be printed
 * @n: The number of paramters
 * @...: calculate the sum of.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int indx;

	va_start(strings, n);

	for (indx = 0; indx < n; indx++)
	{
	str = va_arg(strings, char *);

	if (str == NULL)
	printf("(nil)");
else
	printf("%s", str);

	if (indx != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

