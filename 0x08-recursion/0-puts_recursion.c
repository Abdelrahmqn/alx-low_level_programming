#include "main.h"
/**
 * _puts_recursion - prints a string recursevely
 * @s: string of characters
 * Reteurn: return 0 when success
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	printf("%c\n", *s);
	_puts_recursion(s + 1);
	}
}
