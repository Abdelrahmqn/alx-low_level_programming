#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}
