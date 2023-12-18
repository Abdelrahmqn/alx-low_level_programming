#include "main.h"
#include <stdio.h>
/**
 * cap_string - changes any letters of a string to uppercase.
 * @s2: lower case string of characters.
 * Return: uppercase characters.
 */
char *cap_string(char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		if (s2[i] != islower(s2[i]))
		{
			s2[i] = toupper(s2[i]);
		}
		i++;
	}
	return (s2);
}
