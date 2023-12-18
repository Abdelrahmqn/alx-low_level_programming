#include "main.h"
/**
 * _print_rot - Applies a string and prints the transformed chars
 * @args: Argument containing the string to be transformed.
 * Return: The count of characters printed or -1 if fails.
 */

char *rot13(char *c)
{
	int set_13;
	int i = 0;
    char *str;

	if (str)
	{
		while (*str != '\0')
		{
			c = *str;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			set_13 = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			c = set_13 + ((c - set_13 + 13) % 26);
		}
	}
	i++;
	str++;
		}
	}
	return (0);
}