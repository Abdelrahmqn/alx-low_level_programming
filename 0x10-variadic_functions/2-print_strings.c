#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @n: number of strings passed to the function.
 * @separator: the string to be printed between the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *strings;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(args, char*);
		if (strings == NULL)
		{
			printf("(nil)");
		}
	else
		{
			printf("%s", strings);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
