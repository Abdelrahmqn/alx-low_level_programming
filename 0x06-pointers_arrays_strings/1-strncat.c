#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input src to the dest string
 * @src: input value
 * @n: bytes to string
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
	d++;
	}
	for (s = 0; s < n && src[s] != '\0')
	{
	dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
