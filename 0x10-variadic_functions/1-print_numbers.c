#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator between the numbers.
 * @n: the numbers of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && < n - 1)
	{
		printf("%s", separator)
		printf(", ");
	}
	}
	va_end(args);
	printf("\n");
}
