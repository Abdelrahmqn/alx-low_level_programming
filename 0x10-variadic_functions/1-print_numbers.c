#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, by noew lines
 * @separator: The string to be printed.
 * @n:  number of integers.
 * @...: A variable number of numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int indx;

	va_start(nums, n);

	for (index = 0; indx < n; indx++)
	{
		printf("%d", va_arg(nums, int));

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

