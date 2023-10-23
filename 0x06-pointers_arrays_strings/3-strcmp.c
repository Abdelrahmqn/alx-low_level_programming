#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string of characters.
 * @s2: string of characters.
 * Return: always (0) when success.
 */
int _strcmp(char *s1, char *s2)
{
	int b = 0;

	while (s1[b] != '\0' && s2[b] != '\0')
	{
	if (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}
	b++;
	}
		return (0);

}
