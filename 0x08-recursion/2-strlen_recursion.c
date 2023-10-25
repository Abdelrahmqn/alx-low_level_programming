#include "main.h"
/**
 * _strlen_recursion - the length of the string with recursion
 * @s: string of characters
 * Return: success 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		{
		return (1 + _strlen_recursion(s + 1));
		}
	else
{
	return (0);
}
}
