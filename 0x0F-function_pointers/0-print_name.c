#include "function_pointers.h"
/**
 * print_name - Write a function that prints a name.
 * @name: the name that will printed.
 * @f: pointer to funcion.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
	f(name);
	}
}
