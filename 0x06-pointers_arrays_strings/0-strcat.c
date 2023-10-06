#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input src to the dest string
 * @src: input value
 *
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	while (dest[d] != '\0')
	{
	d++;
	}
	while (src[s] != '\0')
	{
	s++;
	}
	dest[d] = src[s];
	{
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
