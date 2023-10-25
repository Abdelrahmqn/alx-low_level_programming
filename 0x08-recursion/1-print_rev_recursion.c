#include "main.h"
/**
 * _print_rev_recursion - print str in reverse.
 * @s: string of characters
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	printf("%c\n", *s);
	_print_rev_recursion(s - 1);
	}
}
