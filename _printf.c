#include "main.h"
#include <stdarg.h>
/**
 * _printf - according to format produce output.
 *
 * @format: is a character string.The format string is composed of zero
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int counting = 0;
	va_list args;
	int (*func)(va_list);
	int j;

	va_start(args, format)
	for (j = 0; format[j]; j++)
	{
		if (*format != '%')
	{
			counting++;
			_putchar(format[j]);
	}
		else
		{
	j++;
	if (format[j])
		return (-1);
	func = format_function(format[j]);

			if (func == NULL)
				counting += print_default(format[j]);
			else
				counting += func(args);
		}
	}
	va_end(args);
	return (counting);
}
