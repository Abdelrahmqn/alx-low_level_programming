#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: the  is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *str;
	va_list args;
	unsigned int j = 0;

	va_start(args, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j++;
				continue;
				break;
		}
	if (format[j + 1])
	{
		printf(", ");
	}
	j++;
	}
	va_end(args);
	printf("\n");
}
