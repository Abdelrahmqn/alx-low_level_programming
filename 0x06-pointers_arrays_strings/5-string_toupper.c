#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s1: lower case string of characters.
 * Return: uppercase characters.
 */
char *string_toupper(char *s1)
{
	int upper;

	for (upper = 0; s1[upper] != '\0'; upper++)
	{
		if (islower(s1[upper]))
		{
		s1[upper] = toupper(s1[upper]);
		}
}
	return (s1);
}
