#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: the  is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *s;
	va_list args;
	int j;

	va_start(args, format);
	if (rmat && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, char));
				break;
			case 'i':
				printf("%d", va_arg(args, int);
				break;
			case 'f':
				printf("%f", va_arg(args, double);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					printf("(nil)");
				else
				printf("%s", s);
				break;
				default;
				break;
		}
	if (foramt[i + 1])
	{
		printf(", ");
	}
	va_end(args);
	printf("\n");
	}
}
