#include "main.h"
/**
 * format_functions - function based on the format specifier.
 * @s: Format specifier passed as an argument to the program.
 *
 * Return: Pointer to the function that corresponds to the format specifier
 */ 
int (*format_function(char *s))(va_list)
{
	int limits = 2;
	prints_c ops[] = {
	{'c', _print_char},
	{'s', _print_str},
	};
	int i;

	if (s == NULL)
	return (NULL);

	for (i = 0; ops[i].c < limits; i++)
	{
		if (*(ops[i].c) == *s)
			return (ops[i].c);
	}
	return (NULL);
}
