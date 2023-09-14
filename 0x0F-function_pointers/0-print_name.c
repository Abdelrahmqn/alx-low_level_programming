#include "function_pointers.h"
/**
 *print_name - Write a function that prints a name.
 *@name: int
 *@f:int
 *Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
